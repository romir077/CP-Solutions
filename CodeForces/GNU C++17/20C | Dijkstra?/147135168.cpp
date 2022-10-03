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
using namespace std;
 
map<int,vector<pair<int,int>>>mp;
map<int,int>pmap;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(m)
    rep(i,0,m){
        dix diy diz
        mp[x].push_back({y,z});
        mp[y].push_back({x,z});
    }
    V dis(n+1,100000000000000);
    V vis(n+1,0);
    dis[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push({0,1});
    while(!q.empty()){
        int p=q.top().second;
        q.pop();
        if(vis[p]) continue;
        vis[p]=1;
        for(auto i:mp[p]){
            if(dis[i.first]>dis[p]+i.second){
                dis[i.first]=min(dis[p]+i.second,dis[i.first]);
                pmap[i.first]=p;
            }
            if(!vis[i.first])q.push({dis[i.first],i.first});
        }
        
    }
    // for(auto i:mpp){
    //     cout<<i.first<<"  ";
    //     for(auto j:i.second){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    pmap[1]=1;
    if(dis[n]!=100000000000000){
        int i=n;
        V c;
        c.push_back(n);
        // cout<<n<<" ";
        while(pmap[i]!=1){
            // cout<<pmap[i]<<" ";
            c.push_back(pmap[i]);
            i=pmap[i];
        }
        // cout<<1<<"\n";
        c.push_back(1);
        // cout<<dis[n]<<"\n";
        reverse(all(c));
        rep(j,0,c.size())cout<<c[j]<<" ";
        cout<<endl;
    }
    else cout<<"-1\n";
    return 0;
}