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
map<int,vector<int>>mp;
vector<int>pp;
vector<bool>vis(200005,false);
vector<vector<int>>p;
int dfs(int x){
    pp.push_back(x);
    vis[x]=true;
    if(mp[x].size()==0){p.push_back(pp);pp.clear();return 0;}
    for(auto i:mp[x]){
        if(dfs(i)==0)return 0;
    }
}
 
vector<int>b;
queue<int>q;
void bfs(int x){
    q.push(x);
    // vis[x]=true;
    while(!q.empty()){
        int a=q.front();
        b.push_back(a);
        q.pop();
        for(auto i:mp[a]){
            q.push(i);
        }
    }
}
 
void solve(){
    din V a(n);
    take(a,n);
    int root;
    repin{
        if(a[i]!=i+1)mp[a[i]].push_back(i+1);
        else root=i+1;
    }
    // for(auto i:mp){
    //     cout<<i.first<<"  ";
    //     for(auto j:i.second)cout<<j<<" ";
    // memset(vis,false,sizeof(vis));
    //     cout<<"\n";
    // }
    bfs(root);
    dfs(root);
    // rep(i,0,6)if(vis[i])cout<<i<<" ";
    for(auto i:b){
        if(vis[i]==false)dfs(i);
        // cout<<i<<" ";
    }
    cout<<p.size()<<"\n";
    for(auto i:p){
        cout<<i.size()<<"\n";
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    p.clear();
    pp.clear();
    rep(i,0,n+1)vis[i]=false;
    b.clear();
    mp.clear();
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