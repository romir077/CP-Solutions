#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define precise(i) cout<<fixed<<setprecision(i)
#define V vector<int>
#define take(a,n) for(int j=0;j<n;j++) cin>>a[j];
#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define db double
#define MOD 1000000007
#define el cout<<endl;
using namespace std;
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double r,s,p;
    cin>>r>>s>>p;
    double dp[(int)(r)+1][(int)(s)+1][(int)(p)+1];
    memset(dp,(double)(0),sizeof(dp));
    dp[(int)(r)][(int)(s)][(int)(p)]=(double)(1);
    rrep(i,(int)(r),0){
        rrep(j,(int)(s),0){
            rrep(k,(int)(p),0){
                // cout<<(double)(i*j)/(double)(i*j+j*k+k*i)<<" ";
                if(i-1>=0 && !(i*j+j*k+k*i==0))dp[i-1][j][k]+=(double)(i*k)*dp[i][j][k]/(double)(i*j+j*k+k*i);
                if(j-1>=0 && !(i*j+j*k+k*i==0))dp[i][j-1][k]+=(double)(i*j)*dp[i][j][k]/(double)(i*j+j*k+k*i);
                if(k-1>=0 && !(i*j+j*k+k*i==0))dp[i][j][k-1]+=(double)(j*k)*dp[i][j][k]/(double)(i*j+j*k+k*i);
            }
        }
    }
 
    double ans1=0,ans2=0,ans3=0;
    rep(i,1,(int)(r)+1){
        ans1+=dp[i][0][0];
    }
    rep(i,1,(int)(s)+1){
        ans2+=dp[0][i][0];
    }
    rep(i,1,(int)(p)+1){
        ans3+=dp[0][0][i];
    }
    precise(14)<<ans1<<" "<<ans2<<" "<<ans3<<"\n";
    return 0;
}