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
 
int sum(int n){
    int q=0;
    while(n>0){
        q+=n%10;
        n/=10;
    }
    return q;
}
 
void solve(){
    din
    int a;
    while(1){
        int a=__gcd(n,sum(n));
        if(a==1) n++;
        else break;
    }
    cout<<n<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}