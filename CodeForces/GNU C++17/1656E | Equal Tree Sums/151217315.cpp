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
vector<int>col(100005,-1);
map<int,vector<int>>mp;
queue<int>q;
bool vis[100005];
void bfs(){
    q.push(1);
    col[1]=0;
    vis[1]=true;
    int l=1;
    while(!q.empty()){
        queue<int>p;
        while(!q.empty()){
            int x=q.front();
            col[x]=l;
            q.pop();
            for(auto i:mp[x]){
                if(vis[i])continue;
                vis[i]=true;
                p.push(i);
            }
        }
        q=p;
        while(!p.empty())p.pop();
        l++;
        l=l%2;
    }
}
 
void solve(){
    din
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    bfs();
    // give(col,n+1);
    // cout<<"\n";
    // rep(i,1,n+1){
    //     cout<<mp[i].size()<<" ";
    // }
    // cout<<"\n";
    rep(i,1,n+1){
        if(col[i]==0)cout<<(-1)*abs((int)mp[i].size())<<" ";
        else cout<<abs((int)mp[i].size())<<" ";
    }
    cout<<"\n";
    mp.clear();
    col.assign(100005,-1);
    memset(vis,false,100005);
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