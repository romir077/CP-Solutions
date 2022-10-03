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
 
map<int,set<int>>mp;
vector<V>comp;
vector<int>tmp;
V vis(305,0);
void dfs(int x){
    vis[x]=1;
    tmp.push_back(x);
    for(auto i:mp[x]){
        if(vis[i])continue;
        dfs(i);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din V a(n);
    take(a,n);
    vector<string>s(n);
    take(s,n);
    repin{
        rep(j,0,n){
            if(s[i][j]=='1'){
                mp[i+1].insert(j+1);
                mp[j+1].insert(i+1);
            }
        }
    }
    repin{
        if(vis[i+1]==0){
            dfs(i+1);
            // give(vis,n+1);cout<<"\n";
            comp.push_back(tmp);
            tmp.clear();
        }
    }
    for(auto i:comp){
        V x,y;
        for(auto j:i){x.push_back(a[j-1]);y.push_back(j-1);}
        // give(x,n);cout<<"\n";
        sort(all(x));
        sort(all(y));
        // give(x,n);cout<<"\n";
        int ind=0;
        for(auto j:y){a[j]=x[ind];ind++;}
        // for(auto j:i)cout<<j<<" ";
        // cout<<"  ";
    }
    give(a,n);
    return 0;
}