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
    din di(h) dia dib di(k)
    while(k--){
        di(w) dix diy diz
        int p=0;
        if(w==y) {cout<<abs(z-x)<<"\n";continue;}
        if(x<a || x>b) {p+=min(abs(x-a),abs(x-b));
            if(x<a) p+=abs(z-a);
            if(x>b) p+=abs(z-b);
        }
        p+=abs(w-y);
        if(x>=a && x<=b) p+=abs(x-z);
        cout<<p<<"\n"; 
    }
    return 0;
}