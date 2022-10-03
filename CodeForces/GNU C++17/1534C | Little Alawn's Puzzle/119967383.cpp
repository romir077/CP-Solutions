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
vector<int>adj[400001];
bool visited[400001];
void dfs(int s) {
    visited[s]=true;
    rep(i,0,adj[s].size()){
        if(visited[adj[s][i]]==false)
        dfs(adj[s][i]);
    }
}
 
int power(int a,int b){
    int x=1;
    while(b--) {x*=a;x=x%1000000007;}
    return x;
}
 
signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
di(t)
while(t--){
    int tot=0;
    di(e)
    // vector <int> adj[e+1];
    // bool visited[e+1];
    V a(e),b(e);
    rep(i,0,e) cin>>a[i];                 
    rep(i,0,e) cin>>b[i];   
    rep(i,0,e+1) adj[i].clear();              
    rep(i,0,e){
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    rep(i,0,e+1) visited[i]=false;                        
    rep(i,1,e+1){
        if(visited[i]==false){
            dfs(i);
            // cout<<i<<" ";
            tot++;
        }
    }
    // cout<<endl;
    cout<<power(2,tot)<<"\n";
}
return 0;
}