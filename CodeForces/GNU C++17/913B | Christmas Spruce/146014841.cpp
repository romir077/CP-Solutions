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
 
queue<int>q;
 
bool bfs(map<int,vector<int>> &mp, int x){
    int tot=0;
    // vis[1]=1;
    for(auto i:mp[1]){
        if(mp[i].size()==0)tot++;
        else q.push(i);
        // vis[i]=1;
    }
    if(tot<3)return false;
    while(!q.empty()){
        tot=0;
        for(auto i:mp[q.front()]){
            if(mp[i].size()==0)tot++;
            else q.push(i);
        }
        q.pop();
        if(tot<3)return false;
    }
    return true;
 
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din;
    map<int,vector<int>>mp;
    rep(i,0,n-1){
        dix
        mp[x].push_back(i+2);
    }
    if(bfs(mp,1))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}