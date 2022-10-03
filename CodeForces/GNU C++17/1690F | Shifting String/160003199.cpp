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
 
void solve(){
    din 
    sin
    V a(n);
    take(a,n);
    vector<V>cycle;
    V vis(n+1,0);
    rep(i,1,n+1){
        if(vis[i])continue;
        V temp;
        int p=a[a[i-1]-1];
        vis[i]=1;
        vis[p]=1;
        vis[a[i-1]]=1;
        temp.push_back(a[i-1]);
        // temp.push_back(i);
        // if(i!=p)temp.push_back(p);
        while(p!=i){
            temp.push_back(p);
            vis[p]=1;
            p=a[p-1];
        }
        temp.push_back(p);
        cycle.push_back(temp);
    }
    // for(auto i:cycle){
    //     for(auto j:i)cout<<j<<" ";
    //     cout<<"\n";
    // }
    V ans;
    for(auto i:cycle){
        vector<int>check=i;
        string r="";
        int tot=1;
        for(auto j:i)r+=s[j-1];
        string g=r.substr(1);
        g+=r[0];
        while(g!=r){
            string temp=g.substr(1);
            temp+=g[0];
            g=temp;
            tot++;
        }
        ans.push_back(tot);
    }
    // give(ans,ans.size());
    int res=1;
    rep(i,0,ans.size()){
        res=(res*ans[i])/__gcd(res,ans[i]);
    }
    cout<<res<<"\n";
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