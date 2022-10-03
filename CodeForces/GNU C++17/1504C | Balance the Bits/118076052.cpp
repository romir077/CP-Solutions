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
    din
    sin
    if(count(all(s),'0')%2==1) {cout<<"NO\n";return;}
    if(s[0]=='0' || s.back()=='0') {cout<<"NO\n";return;}
    int c0=0,c1=0,one=count(all(s),'1'),zero=count(all(s),'0');
    cout<<"YES\n";
    rep(i,0,n){
        if(s[i]=='1' && c1<one/2) {cout<<"(";}    
        if(s[i]=='1' && c1>=one/2) {cout<<")";}
        if(s[i]=='0' && c0%2==0) {cout<<"(";}    
        if(s[i]=='0' && c0%2==1) {cout<<")";}    
        if(s[i]=='0') c0++;
        if(s[i]=='1') c1++;
    }
    c1=0;c0=0;
    cout<<"\n";
    rep(i,0,n){
        if(s[i]=='1' && c1<one/2) {cout<<'(';}    
        if(s[i]=='1' && c1>=one/2) {cout<<')';}
        if(s[i]=='0' && c0%2==0) {cout<<')';}    
        if(s[i]=='0' && c0%2==1) {cout<<'(';}    
        if(s[i]=='0') c0++;
        if(s[i]=='1') c1++;
    }
    cout<<"\n";
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