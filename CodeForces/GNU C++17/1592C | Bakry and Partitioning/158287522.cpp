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
 
V vis(100005,0);
V a(100005,0);
V xrr(100005,0);
int xorr=0,cnt=0;
map<int,V>mp;
 
int dfs(int x){
    vis[x]=1;
    int xr=a[x-1];
    for(auto i:mp[x]){
        if(vis[i])continue;
        xrr[i]=dfs(i);
        if(xrr[i]==xorr)cnt++;
        else{
            xr^=xrr[i];
        }
    }
    return xr;
}
 
void solve(){
    din di(k)
    take(a,n);
    repin{
        xorr^=a[i];
    }
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    dfs(1);
    if(xorr==0){cout<<"YES\n";}
    else{
        if(cnt>=2 && k>2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    mp.clear();
    rep(i,0,n+1)xrr[i]=0;
    rep(i,0,n+1)vis[i]=0;
    rep(i,0,n+1)a[i]=0;
    xorr=0;cnt=0;
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