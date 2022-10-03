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
 
vector<V>mp;
vector<int>child;
vector<int>vis;
int dfs(int a){
    vis[a]=1;
    int size=1;
    for(auto i:mp[a]){
        if(vis[i])continue;
        size+=dfs(i);
    }
    return child[a]=size;
}
int dfs2(int a){
    vis[a]=1;
    int sum=0,maxi=INT_MIN;
    for(auto i:mp[a]){
        if(vis[i])continue;
        int temp=dfs2(i);
        sum+=temp;
        maxi=max(child[i]-temp-1,maxi);
    }
    if(maxi+sum>=0)return (maxi+sum);
    else return 0;
}
void solve(){
    din
    child=V(n+1,0);
    vis=V(n+1,0);
    mp=vector<V>(n+1);
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    dfs(1);
    rep(i,0,n+1)vis[i]=0;
    cout<<dfs2(1)<<"\n";
 
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