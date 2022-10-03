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
#define take(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define give(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define db double
using namespace std;
 
int m=1000000007;
 
int power( int N, int M, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;sum%=m;}
    power = (power * power)%m;M = M >> 1;}
    return sum;
}
// int k;
// V dp(200001,-1);
 
 
// int ans(int n, int k){
//     dp[0]=1;
//     if(n&1){
//         // if(k>0) {if(dp[k]==-1){dp[k]=(((power(2,n-1,m)+1)%m)*ans(n,k-1))%m;};return (((power(2,n-1,m)+1)%m)*ans(n,k-1))%m;}
//         // else {return 1;}
    
//     }
//     else{
 
//     }
// }
 
void solve(){
    din di(k)
    V dp(k+1);
    rep(i,0,k+1)dp[1]=-1;
    dp[0]=1;
    if(n&1){
        rep(i,1,k+1){
            dp[i]=(dp[i-1]*(power(2,n-1,m)+1)%m)%m;
        }
        cout<<dp[k]<<"\n";
    }
    else{
        rep(i,1,k+1){
            dp[i]=((power(2,n*(i-1),m))%m+(dp[i-1]*(power(2,n-1,m)-1)%m)%m)%m;
        }
        cout<<dp[k]<<"\n";
    }
 
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}