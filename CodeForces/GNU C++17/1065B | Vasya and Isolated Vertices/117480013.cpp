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
    dia dib
    if(2*b>=a) cout<<0<<" ";
    else cout<<a-2*b<<" ";
    if(b==0) cout<<a;
    if(b==1) cout<<a-2;
    if(b==2) cout<<a-3;
    if(b>2){
        int z=3;
        while((z*(z-1))/2<b) z++;
        cout<<a-z;
    }
        
    return 0;
}