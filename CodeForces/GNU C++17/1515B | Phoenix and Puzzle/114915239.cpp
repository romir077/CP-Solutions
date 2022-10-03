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
    if(n%2==1) cout<<"NO\n";
    else{
        while(n%2==0){
            n/=2;
        }
        int k=floor(sqrt(n));
        if(k*k==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}