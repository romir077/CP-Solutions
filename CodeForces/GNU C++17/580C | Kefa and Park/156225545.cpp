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
// V A(200005,0);
map<int,vector<int>>mp;
// vector<bool>vis(200005,false);
 
 
void solve(){
    din di(k)
    V a(n);
    take(a,n);
    // vpii g(n-1);
    rep(i,0,n-1){
        dix diy
        // g[i]={x,y};
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    V d(n+1,0);
    // give(a,n);
    if(a[0]==1)d[1]=1;
 
    // d[]=0;
    queue<int>q;
    q.push(1);
    vector<bool>visi(n+1,false);
    visi[1]=true;
    int tot=1;
    V edge;
    while(!q.empty()){
        queue<int>p;    
 
        while(!q.empty()){
            int s=q.front();
            q.pop();
            visi[s]=true;
            if(mp[s].size()==1)edge.push_back(s);
            for(auto i:mp[s]){
                if(visi[i]==true)continue;
                if(d[s]>=INT_MAX){
                    d[i]=d[s]+1;
                }
                else{
                    if(a[i-1]==0)d[i]=0;
                    else d[i]=d[s]+1;
                }
                if(d[i]>k)d[i]=INT_MAX;
                p.push(i);
                tot++;
            }
        }
        q=p;
        while(!p.empty())p.pop();
    }
    int anss=0;
    // give(d,n+1);
    for(auto i:edge){
        if(i==1)continue;
        if(d[i]>=INT_MAX)continue;
        if(d[i]>k)continue;
        anss++;
    }
    cout<<anss<<"\n";
 
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    // int a=1;
    while(t--){
        solve();
        // a++;
    }
    return 0;
}