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
    din
    vector<double>a(n);
    take(a,n);
    vector<vector<double>>dp(n+1,vector<double>(n+1,0));
    dp[1][0]=1-a[0];
    dp[1][1]=a[0];
    rep(i,2,n+1){
        dp[i][0]=dp[i-1][0]*(1-a[i-1]);
    }
    rep(i,2,n+1){
        rep(j,1,i+1){
            dp[i][j]=dp[i-1][j]*(1-a[i-1])+dp[i-1][j-1]*a[i-1];
        }
    }
    double ans=0;
    rep(i,n/2+1,n+1){
        ans+=dp[n][i];
    }
    precise(10)<<ans<<"\n";
    return 0;
}