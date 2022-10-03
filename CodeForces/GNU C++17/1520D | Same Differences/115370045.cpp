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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
 
 
void solve(){
    din
    V a(n);
    repin cin>>a[i];
    V b(n+1,0);
    V c(n+1,0);
    rep(i,0,n){
        if(a[i]-i>=0)b[a[i]-i]++;
        if(a[i]-i<0)c[abs(a[i]-i)]++;
    }
    int sum=0;
    rep(i,0,n+1){
        if(b[i]>1) sum+=(b[i]*(b[i]-1))/2;
    }
    rep(i,0,n+1){
        if(c[i]>1) sum+=(c[i]*(c[i]-1))/2;
    }
    cout<<sum<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}