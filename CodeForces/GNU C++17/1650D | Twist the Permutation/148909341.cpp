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
    din V a(n);
    take(a,n);
    V b;
    int ans=0;
    rrep(i,n,1){
        int x=i;
        V c(n);
        int pos=-1;
        rep(j,0,i){
            if(a[j]==i)pos=j;
        }
        int y=(pos+1)%i;
        b.push_back(y);
        int z=i-y;
        rep(j,0,i){
            c[(j+z)%i]=a[j];
        }
        rep(j,i,n){
            c[j]=a[j];
        }
        // give(c,n);
        // cout<<"\n";
        a=c;
    }
    reverse(all(b));
    give(b,n);
    cout<<"\n";
    
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