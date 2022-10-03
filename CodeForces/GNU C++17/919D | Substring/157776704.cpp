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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(m)
    map<int,vector<int>>mp1,mp2;
    sin
    V deg(n+1,0);
    rep(i,0,m){
        dix diy
        mp1[x].push_back(y);
        deg[y]++;
        // mp2[y].push_back(x);
    }
    int dp[n+1][26];
    // memset(dp,0,sizeof(dp));
    memset(dp,0,sizeof(dp));
    queue<int>q;
    int tot=0;
    rep(i,1,n+1){
        // deg[i]=mp2[i].size();
        if(deg[i]==0){tot++;q.push(i);}
    }
    // int x=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        dp[x][s[x-1]-'a']++;
        for(auto i:mp1[x]){
            rep(j,0,26){
                dp[i][j]=max(dp[i][j],dp[x][j]);
            }
            deg[i]--;
            if(deg[i]==0){q.push(i);tot++;}
        }
    }
    if(tot!=n){cout<<"-1\n";return 0;}
    int ans=0;
    rep(i,1,n+1){
        rep(j,0,26){
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}