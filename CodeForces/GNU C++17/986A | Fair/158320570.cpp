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
vector<V>mp(100005);
vector<V>a(101);
vector<V>b(101);
void bfs(int x){
    queue<int>q;
    V temp(100005,0);
    for(auto i:a[x]){
        q.push(i);
        vis[i]=1;
    }
    int dist=1;
    while(!q.empty()){
        queue<int>p;
        while(!q.empty()){
            int l=q.front();
            q.pop();
            for(auto i:mp[l]){
                if(vis[i])continue;
                temp[i]=dist;
                p.push(i);
                vis[i]=1;
            }
        }
        q=p;
        // while(!p.empty())p.pop();
        dist++;
    }
    b[x]=temp;
    rep(i,0,100005)vis[i]=0;
    return;
}
 
void solve(){
    din di(m) di(k) di(s)
    rep(i,0,n){
        dix
        a[x].push_back(i+1);
    }
    rep(i,0,m){
        di(f) di(g)
        mp[f].push_back(g);
        mp[g].push_back(f);
    }
    rep(i,1,k+1)bfs(i);
    rep(i,1,n+1){
        V temp;
        rep(j,1,k+1){
            temp.push_back(b[j][i]);
        }
        nth_element(temp.begin(), temp.begin() + s, temp.begin() + k);
        int ans=0;
        // int res = 0;
        for (int j = 0; j < s; j++)
            ans += temp[j];
        // rep(k,0,s)ans+=temp[k];
        cout<<ans<<" ";
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