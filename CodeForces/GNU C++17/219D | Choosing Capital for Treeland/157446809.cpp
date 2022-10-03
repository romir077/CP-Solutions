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
 
map<int,unordered_set<int>>mp;
map<int,unordered_set<int>>mp1;
int tot=0;
vector<int>colour(200005,1);
vector<int>dist(200005,0);
vector<int>vis(200005,0);
vector<int>how(200005,0);
void dfs(int x,int h,int r){
    h++;
    vis[x]=1;
    for(auto i:mp[x]){
        if(vis[i])continue;
        dist[i]=h;
        if(mp1[i].count(x)){
            tot++;
            colour[i]=0;
        }
        if(colour[i]==0)how[i]=r+1;
        
        if(colour[i]==0)dfs(i,h,r+1);
        else dfs(i,h,r);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din
    rep(i,0,n-1){
        dix diy
        mp1[x].insert(y);
        mp[x].insert(y);
        mp[y].insert(x);
    }
    dfs(1,0,0);
    // cout<<tot;
    // give(colour,5);el;
    // give(dist,5);el;
    // give(vis,5);el;
    // give(how,5);el;
    map<int,V>ans;
    rep(i,1,n+1){
        int x=tot-how[i]*2+dist[i];
        ans[x].push_back(i);
    }
    for(auto i:ans){
        cout<<i.first<<"\n";
        for(auto j:i.second)cout<<j<<" ";
        cout<<"\n";
        break;
    }
    return 0;
}