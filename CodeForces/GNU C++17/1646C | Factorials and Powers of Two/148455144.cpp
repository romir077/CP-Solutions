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
 
int setb(int n){
    int x=0;
    while(n>0){
        if(n&1)x++;
        n/=2;
    }
    return x;
}
 
void solve(){
    din 
    int x=1,y=1;
    int fact[15];
    fact[0]=1;
    while(x<=(int)(1e12)){
        fact[y]=x;
        y++;
        x*=y;
    }
    int ans=setb(n);
    // cout<<ans<<" ";
    rep(i,0,(1<<14)){
        int sum=0;
        int p=setb(i);
        rep(j,0,14){
            if(i&(1<<j))sum+=fact[j+1];
        }
        int q=n-sum;
        if(q>=0){
            int g=setb(q);
            ans=min(ans,g+p);
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
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}