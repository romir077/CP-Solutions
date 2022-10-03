#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
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
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
 
void solve(){
    V a(4);
    rep(i,0,4) cin>>a[i];
    V b=a;
    sort(all(b));
    if((b[2]==a[0] || b[2]==a[1])&&(b[3]==a[2] || b[3]==a[3])) {cout<<"YES\n";return;}
    if((b[2]==a[2] || b[2]==a[3])&&(b[3]==a[0] || b[3]==a[1])) {cout<<"YES\n";return;}
    cout<<"NO\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}