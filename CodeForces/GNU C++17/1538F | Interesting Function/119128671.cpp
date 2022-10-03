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
    while(b--){
        x*=a;
    }
    return x;
}
 
void solve(){
    dia dib
    int p=a,q=b;
    int x=0,y=0;
    while(p) x++,p/=10;
    while(q) y++,q/=10;
    int l=0,m=0;
    p=a,q=b;
    while(x){
        l+=(a/(int)(power(10,x-1)));
        x--;
    }
    while(y){
        m+=(b/(int)(power(10,y-1)));
        y--;
    }
    cout<<m-l<<"\n";
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