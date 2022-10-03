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
    dix diy diz
    if((x+y+z)%2==0){
        int a=(x+y-z)/2,b=(x-y+z)/2,c=(-x+y+z)/2;
        if(a<0 || b<0 || c<0) cout<<"Impossible\n";
        else cout<<a<<" "<<c<<" "<<b;
    }
    else cout<<"Impossible\n";
    return 0;
}