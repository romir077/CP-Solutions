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
 
map<int,vector<int>>mp;
V c(100005,0);
V vis(100005,0);
// vector<bool>p(100005,false);
bool dfs(int x){
    vis[x]=1;
    bool ans=true;
    int c1=c[x];
    for(auto i:mp[x]){
        if(vis[i])continue;
        ans&=dfs(i);
        if(c[i]!=c1)ans=false;
    }
    if(mp[x].size()==1)return true;
    return ans;
    // for(auto i:mp[x]){
    //     if(i)
    // }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    repin{
        dix c[i+1]=x;
    }
    int a=-1,b=-1;
    for(auto i:mp){
        for(auto j:i.second){
            if(c[i.first]!=c[j]){
                a=i.first;
                b=j;
                goto l;
            }
        }
    }
    l:;
    if(a==-1)cout<<"YES\n1\n";
    else{
        // cout<<a<<" "<<b<<" ";
        vis[a]=1;
        bool ans=true;
        for(auto i:mp[a]){
            ans&=dfs(i);
        }
        if(ans){cout<<"YES\n"<<a;return 0;}
        rep(i,1,n+1)vis[i]=0;
        vis[b]=1;
        ans=true;
        for(auto i:mp[b]){
            ans&=dfs(i);
        }
        if(ans){cout<<"YES\n"<<b;return 0;}
        cout<<"NO\n";
    }
    return 0;
}