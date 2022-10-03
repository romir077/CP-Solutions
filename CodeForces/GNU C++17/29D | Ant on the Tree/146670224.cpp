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
#define el cout<<"\n";
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
V ans;
int n;
map<int,vector<int>>mp;
map<int,int>pmap;
bool vis[305];
queue<int>q;
bool bfs(int c, int d){
    vis[c]=true;
    for(auto i:mp[c]){
        vis[i]=true;
        if(i==d){
            ans.push_back(d);
            // ans.push_back(c);
            while(!q.empty())q.pop();
            return true;
        }
        pmap[i]=c;
        q.push(i);
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto i:mp[x]){
            if(i==pmap[x])continue;
            if(vis[i])continue;
            if(i==d){
                pmap[i]=x;
                ans.push_back(d);
                while(i!=c){
                    ans.push_back(pmap[i]);
                    i=pmap[i];
                }
                ans.pop_back();
                while(!q.empty())q.pop();
                return true;
            }
            else{
                pmap[i]=x;
                vis[i]=true;
                q.push(i);
            }
        }
    }
 
    return false;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    rep(i,0,n-1){
        dix diy
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    int k=0;
    for(auto i:mp){
        if(i.second.size()==1 && i.first!=1)k++;
    }
    // cout<<k;
    V l;
    V t;
    l.push_back(1);
    rep(i,0,k){
        di(d)
        l.push_back(d);
    }
    l.push_back(1);
    rep(i,1,l.size()){
        bfs(l[i-1],l[i]);
        reverse(all(ans));
        for(auto j:ans){
            // cout<<j<<" ";
            t.push_back(j);
        }
        // cout<<"  ";
        ans.clear();
        memset(vis,false,sizeof(vis));
    }
    if(t.size()==2*n-2){
        cout<<"1 ";
        rep(i,0,t.size())cout<<t[i]<<" ";
        cout<<"\n";
    }
    else cout<<"-1\n";
    
    return 0;
}