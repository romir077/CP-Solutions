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
    di(n)
    V a(n);
    V b(n);
    repin cin>>a[i];
    repin cin>>b[i];
    int arr[n],brr[n];
    arr[0]=a[0];
    brr[0]=b[0];
    rep(i,1,n) arr[i]=arr[i-1]+a[i];
    rep(i,1,n) brr[i]=brr[i-1]+b[i];
    int x[n];
    if(n==1) cout<<"0\n";
    else if(n==2) cout<<min(a[1],b[0])<<"\n";
    else{
        x[0]=arr[n-1]-a[0];
        x[n-1]=brr[n-1]-b[n-1];
        rep(i,1,n-1){
            x[i]=max(brr[i-1],arr[n-1]-arr[i]);
        }
        sort(x,x+n);
        cout<<x[0]<<"\n";
    }
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