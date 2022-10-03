#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    dix diy diz
    if(x!=1 && y!=1 && z!=1){
        cout<<x*y*z<<"\n";
    }
    else if(x==1 && y==1 && z==1){
        cout<<3<<"\n";
    }
    else{
        int a=(x*y)+z;
        int b=x+y*z;
        int c=(x+y)*z;
        int d=x*(y+z);
        int e=x+y+z;
        cout<<max(max(a,max(e,b)),max(c,d));
    }
    return 0;
}