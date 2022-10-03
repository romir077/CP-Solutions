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
    int cnt=0;
    if(n==1){
        cout<<a[0]<<"\n";return;
    }
    if(a[0]>a[1]) {cnt+=(a[0]-a[1]);a[0]=a[1];}
    if(a[n-1]>a[n-2]) {cnt+=(a[n-1]-a[n-2]);a[n-1]=a[n-2];}
    rep(i,1,n-1){
        if(a[i]>a[i-1] && a[i]>a[i+1]) {cnt+=a[i]-max(a[i+1],a[i-1]);a[i]=max(a[i+1],a[i-1]);}
    }
    cnt+=a[0];
    rep(i,1,n){
        cnt+=(abs(a[i]-a[i-1]));
    }
    cnt+=a[n-1];
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