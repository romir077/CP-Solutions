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
 
int knap[101][10001];
 
void solve(){
    din V a(n),b(n);
    take(a,n);
    take(b,n);
    int ans=0;
    memset(knap,0,sizeof(knap));
    V c(n);
    int s=0,sum=0;
    repin{
        c[i]=abs(a[i]-b[i]);
        s+=min(a[i],b[i]);
    }
    repin{
        sum+=(a[i]+b[i]);
        ans+=a[i]*a[i];
        ans+=b[i]*b[i];
    }
    ans=(n-2)*ans;
    int temp=INT_MAX;
    rep(i,0,n+1){
        rep(j,0,10001){
            if(i==0 || j==0)knap[i][j]=0;
            else if(c[i-1]<=j){
                knap[i][j]=max(c[i-1]+knap[i-1][j-c[i-1]],knap[i-1][j]);
            }
            else{
                knap[i][j]=knap[i-1][j];
            }
        }
    }
    // cout<<ans<<" ";
    rep(i,0,n+1){
        rep(j,0,10001){
            if(knap[i][j]){
                temp=min(temp,(knap[i][j]+s)*(knap[i][j]+s)+(sum-(knap[i][j]+s))*(sum-(knap[i][j]+s)));
            }
        }
    }
    if(n==1){cout<<"0\n";return;}
    if(temp==INT_MAX)temp=(knap[0][0]+s)*(knap[0][0]+s)+(sum-(knap[0][0]+s))*(sum-(knap[0][0]+s));
    cout<<ans+temp<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}