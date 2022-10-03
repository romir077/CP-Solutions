#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
 
#define dib di(b)
#define dic di(c)
#define din di(n)
 
#define V vector<int>
 
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(q)
    sin
    V arr(n,0);
    arr[0]=(int)(s[0]-96);
    rep(i,1,n){
        arr[i]=arr[i-1]+(int)(s[i]-96);
    }
    while(q--){
        di(l) di(r)
        if(l==1) cout<<arr[r-1]<<"\n";
        else cout<<arr[r-1]-arr[l-2]<<"\n";
    }
    return 0;
}