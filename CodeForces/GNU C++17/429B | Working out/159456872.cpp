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
 
void solve(){
    din di(m)
    vector<vector<int>>dp1(n+2,vector<int>(m+2,0)),dp2(n+2,vector<int>(m+2,0)),dp3(n+2,vector<int>(m+2,0)),dp4(n+2,vector<int>(m+2,0));
    vector<vector<int>>a(n,vector<int>(m,0));
    repin{
        rep(j,0,m){
            cin>>a[i][j];
        }
    }
    repin{
        rep(j,0,m){
            dp1[i+1][j+1]=max(dp1[i][j+1],dp1[i+1][j])+a[i][j];
        }
    }
    rrep(i,n-1,0){
        rep(j,0,m){
            dp2[i+1][j+1]=max(dp2[i+2][j+1],dp2[i+1][j])+a[i][j];
        }
    }
    repin{
        rrep(j,m-1,0){
            dp3[i+1][j+1]=max(dp3[i][j+1],dp3[i+1][j+2])+a[i][j];
        }
    }
    rrep(i,n-1,0){
        rrep(j,m-1,0){
            dp4[i+1][j+1]=max(dp4[i+2][j+1],dp4[i+1][j+2])+a[i][j];
        }
    }
    int ans=INT_MIN;
    rep(i,2,n){
        rep(j,2,m){
            ans=max(ans,dp1[i-1][j]+dp4[i+1][j]+dp2[i][j-1]+dp3[i][j+1]);
            ans=max(ans,dp1[i][j-1]+dp4[i][j+1]+dp2[i+1][j]+dp3[i-1][j]);
        }
    }
    cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}