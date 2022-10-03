#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repit for(auto it=m.begin();it!=m.end();++it)
#define repin rep(i,0,n)
#define key ((*it).first)//it->first
#define val ((*it).second)//it->second
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define dim di(m)
#define dik di(k)
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define  f first
#define  sec second
#define  mod 1000000007
#define  endl '\n';
#define precise(i) cout<<fixed<<setprecision(i)
    
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
using namespace std;

void solve(){
    din dik
    vector<int>v(n);
   
    repin{
        cin>>v[i];
    }
    int dp[n+1];
    rep(i,0,n+1)dp[i]=INT_MAX;
    dp[0]=0;
    dp[1]=abs(v[0]-v[1]);
   
    for(int i=2;i<n;i++){
        int j;
        if(i-k<=0){j=0;}
        else j=i-k;
        while(j<i){
            dp[i]=min(dp[j]+abs(v[j]-v[i]),dp[i]);
            j++;
        }
    }
    cout<<dp[n-1]<<endl;
}
 
 
int32_t main()
{
    IOS;
   {
        solve();
    }
    return 0;
}