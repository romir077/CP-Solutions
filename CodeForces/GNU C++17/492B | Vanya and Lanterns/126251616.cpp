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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din dix
    V a(n);
    repin cin>>a[i];
    sort(all(a));
    vector<double> b(n+1);
    b[0]=a[0];
    b[n]=x-a[n-1];
    rep(i,0,n-1){
        b[i+1]=(double)(a[i+1]-a[i])/2;
    }
    sort(all(b),greater<int>());
    precise(10)<<b[0];
    return 0;
}