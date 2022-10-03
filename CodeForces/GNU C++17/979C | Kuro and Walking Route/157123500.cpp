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
 
V a(300005,0);
map<int,vector<int>>mp;
vector<bool>vis(300005,false);
void dfs(int x){
    vis[x]=true;
    for(auto i:mp[x]){
        if(vis[i])continue;
        dfs(i);
        a[x]|=a[i];
    }
}
 
int dfs2(int x){
    int tot=1;
    vis[x]=true;
    for(auto i:mp[x]){
        if(vis[i])continue;
        tot+=dfs2(i);
    }
    return tot;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din dix diy
    rep(i,0,n-1){
        dia dib
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    a[x]=1;
    a[y]=1;
    dfs(x);
    rep(i,0,n+1)vis[i]=false;
    rep(i,0,n+1)if(a[i])vis[i]=true;
    int p=dfs2(x),q=dfs2(y);
    // give(a,n+1);cout<<"\n";
    // cout<<p<<" "<<q;
    cout<<n*(n-1)-p*q<<"\n";
    return 0;
}