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
 
signed main()
{
    din di(t)
    vector<int> a(n-1);
    rep(i,0,n-1){
        cin>>a[i];
    }int y=1;
    rep(i,0,n-1){
        if(y==t) {cout<<"YES\n";return 0;}
        else y+=a[i];
        i+=a[i]-1;
    }
    if(y==t) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}