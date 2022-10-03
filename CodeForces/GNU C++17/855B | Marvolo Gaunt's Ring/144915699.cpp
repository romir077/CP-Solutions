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
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din
    dia dib dic
    V x(n);
    take(x,n);
    int dp[n][3];
    dp[0][0]=a*x[0];
    dp[0][1]=a*x[0]+b*x[0];
    dp[0][2]=a*x[0]+b*x[0]+c*x[0];
    rep(i,1,n){
        dp[i][0]=max(dp[i-1][0],a*x[i]);
    }
    rep(i,1,n){
        dp[i][1]=max(dp[i-1][1],dp[i][0]+b*x[i]);
    }
    rep(i,1,n){
        dp[i][2]=max(dp[i-1][2],dp[i][1]+c*x[i]);
    }
    cout<<dp[n-1][2]<<"\n";
    return 0;
}