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
V A(200005,0);
map<int,vector<int>>mp;
vector<bool>vis(200005,false);
void dfs(int x){
    vis[x]=true;
    for(auto i:mp[x]){
        if(vis[i])continue;
        dfs(i);
        A[x]|=A[i];
    }
}
 
void solve(){
    din di(k)
    dix diy
    V a(k);
    take(a,k);
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    rep(i,0,k){
        A[a[i]]=1;
    }
    A[y]=1;
    A[x]=1;
    dfs(x);
    int d[n+1]={};
    d[x]=0;
    queue<int>q;
    q.push(x);
    vector<bool>visi(n+1,false);
    visi[x]=true;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        visi[s]=true;
        for(auto i:mp[s]){
            if(visi[i])continue;
            d[i]=d[s]+1;
            q.push(i);
        }
    }
    int ans=0;
    A[x]=0;
    rep(i,1,n+1){
        if(A[i]==1)ans+=2;
    }
    ans-=d[y];
    cout<<ans<<"\n";
    mp.clear();
    rep(i,1,n+1)A[i]=0;
    rep(i,1,n+1)vis[i]=false;
 
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