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
    din di(q) dic
    int a[11][101][101]={};
    rep(i,0,101){
        rep(j,0,101){
            rep(k,0,11){
                a[k][i][j]=0;
            }
        }
    }
    repin{
        dix diy di(s)
        a[s][x][y]++;
    }
    // rep(j,0,5){
    //     rep(k,0,5){
    //         cout<<a[2][j][k]<<" ";
    //     }
    //     cout<<"\n";
    // }
    rep(i,0,11){
        rep(j,1,101){
            rep(k,1,101){
                a[i][j][k]+=a[i][j-1][k]+a[i][j][k-1]-a[i][j-1][k-1];
            }
        }
    }
    rep(i,0,q){
        di(t) 
        di(x1)
        di(y1)
        di(x2)
        di(y2)
        int ans=0;
        rep(i,0,11){
            int b=(i+t)%(c+1);
            int x=a[i][x2][y2]-a[i][x1-1][y2]-a[i][x2][y1-1]+a[i][x1-1][y1-1];
            ans+=x*b;
        }
        cout<<ans<<"\n";
    }
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