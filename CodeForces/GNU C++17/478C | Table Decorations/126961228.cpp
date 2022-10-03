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
    while(b--) x*=a;
    return x;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dia dib dic
    int z=(a+b+c)/3;
    int y=a+b+c-3*z;
    if(a+b>=z && b+c>=z && c+a>=z) cout<<z;
    else{
        if(a>2*z){
            if(3*z-a>=0){cout<<((3*z-a+y<=z)?3*z-a+y:z);cout<<"\n";}
            else cout<<b+c<<"\n";
        }
        else if(b>2*z){
            if(3*z-b>=0){cout<<((3*z-b+y<=z)?3*z-b+y:z);cout<<"\n";}
            else cout<<a+c<<"\n";
        }
        else if(c>2*z){
            if(3*z-c>=0){cout<<((3*z-c+y<=z)?3*z-c+y:z);cout<<"\n";}
            else cout<<b+a<<"\n";
        }
    }
    return 0;
}