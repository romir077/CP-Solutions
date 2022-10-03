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
    V a(n);
    repin cin>>a[i];
    sort(all(a));
    int min=INT_MAX;
    rep(i,0,n-1){
        if(abs(a[i]-a[i+1])<=min && a[i]<=0 && a[i+1]<=0) min=abs(a[i]-a[i+1]);
    }
    int cnt=0;
    repin{
        if(a[i]<0) cnt++;
        if(a[i]==0) cnt++;
        if(a[i]>0 && a[i]<=min && min>0) {cnt++;break;} 
    }
    cout<<cnt<<"\n";
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