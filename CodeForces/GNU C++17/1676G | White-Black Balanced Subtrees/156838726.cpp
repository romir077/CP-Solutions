 
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
 
map<int,vector<int>>mp;
// vector<bool>vis(200005,false);
string s;
int ans=0;
// int x=0,y=0;
pair<int,int> dfs(int r){
    int x=0,y=0;
    if(s[r-1]=='B')y++;
    else x++;
    for(auto i:mp[r]){
        pair<int,int>p=dfs(i);
        x+=p.first;
        y+=p.second;
    }
    if(x==y)ans++;
    return {x,y};
}
 
void solve(){
    din
    V a(n-1);
    take(a,n-1);
    cin>>s;
    rep(i,0,n-1){
        mp[a[i]].push_back(i+2);
    }
    dfs(1);
    cout<<ans<<"\n";
    mp.clear();
    s.clear();
    ans=0;
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