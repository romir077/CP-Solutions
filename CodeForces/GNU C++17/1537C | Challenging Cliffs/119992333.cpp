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
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    din 
    V a(n);
    repin cin>>a[i];
    sort(all(a));
    int min=INT_MAX,b=0;
    rep(i,1,n){
        if(a[i]-a[i-1]<min) {min=a[i]-a[i-1];b=i;} 
    }
    // cout<<b<<" ";
    cout<<a[b-1]<<" ";
    rep(i,b+1,n) cout<<a[i]<<" ";
    rep(i,0,b-1) cout<<a[i]<<" ";
    cout<<a[b]<<"\n";
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