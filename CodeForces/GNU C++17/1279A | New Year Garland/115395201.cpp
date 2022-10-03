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
    di(a) di(b) di(c)
    V arr{a,b,c};
    sort(all(arr));
    cout<<(arr[2]>arr[1]+arr[0]+1?"NO\n":"YES\n");
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}