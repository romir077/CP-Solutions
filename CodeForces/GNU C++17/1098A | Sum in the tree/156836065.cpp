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
// vector<bool>vis(100005,false);
 
// void dfs(int x,int h){
//     h++;
//     if(h%2==0){
//         int x=INT_MAX;
//         for(auto i:mp[x]){
//             x=min(x,s[i]);
//         }
//         s[x];
//     }
// }
 
void solve(){
    int n;cin>>n;
    V p(100005);
    V s(n);
    V a(n-1);
    take(a,n-1);
    take(s,n);
    rep(i,0,n-1){
        p[i+2]=a[i];
    }
    rep(i,0,n-1){
        mp[a[i]].push_back(i+2);
    }
    repin{
        if(s[i]==-1){
            int x=INT_MAX;
            for(auto j:mp[i+1]){
                x=min(x,s[j-1]);
            }
            s[i]=x;
            if(x==INT_MAX)s[i]=s[p[i+1]-1];
        }
    }
    // give(s,n);cout<<"\n";
    int ans=s[0];
    for(auto i:mp){
        for(auto j:i.second){
            if(s[j-1]<s[i.first-1]){cout<<"-1\n";return;}
            ans+=s[j-1]-s[i.first-1];
        }
    }
    cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}