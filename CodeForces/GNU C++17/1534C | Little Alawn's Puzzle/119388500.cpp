#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
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
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
 
int power(int a,int b){
    int x=1;
    while(b--) {x*=a;x=x%1000000007;}
    return x;
}
 
void solve(){
    din
    V a(n),b(n);
    map <int,int> mp1,mp2;
    repin {cin>>a[i];mp1[a[i]]=i;}
    repin {cin>>b[i];mp2[b[i]]=i;}
    // vector<vector<bool>> vis(2,vector<bool>(n,false));
    int vis[2][n];
    repin{
        vis[0][i]=0;
        vis[1][i]=0;
    }
    int cnt=0;
    rep(i,0,n){
        int z=i;
        if(vis[0][z]==0) {cnt++;}
        while(vis[0][z]==0){
            vis[0][z]=1;
            vis[1][z]=1;
            z=mp1[b[z]];
        }
    }
    cout<<power(2,cnt)<<"\n";
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