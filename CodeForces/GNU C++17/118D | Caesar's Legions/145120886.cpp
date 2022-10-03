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
    di(n1) di(n2) di(k1) di(k2)
    int dp[n1+1][n2+1][k1+1][k2+1];
    memset(dp,0,sizeof(dp));
    dp[0][0][0][0]=1;
    rep(i,0,n1+1){
        rep(j,0,n2+1){
            rep(k,0,k1+1){
                rep(l,0,k2+1){
                    if(i<n1 && k<k1)dp[i+1][j][k+1][0]+=dp[i][j][k][l]%((int)(1e8));
                    if(j<n2 && l<k2)dp[i][j+1][0][l+1]+=dp[i][j][k][l]%((int)(1e8));
                    if(i<n1 && k<k1)dp[i+1][j][k+1][0]%=((int)(1e8));
                    if(j<n2 && l<k2)dp[i][j+1][0][l+1]%=((int)(1e8));
                }
            }
        }
    }
    int ans=0;
    rep(i,0,k1+1){
        rep(j,0,k2+1){
            // cout<<dp[n1][n2][i][j]<<' ';
            ans+=dp[n1][n2][i][j];
            ans%=((int)(1e8));    
        }
        cout<<endl;
    }
    cout<<ans<<"\n";
    return 0;
}