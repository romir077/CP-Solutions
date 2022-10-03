#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define db double
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    dia dib
    if(b>a){cout<<-1;}
    else{
        if(a%2==0){
            if((a/2)%b==0){
                cout<<a/2;
            }
            else{
                int x=b*ceil((double)a/(2*b));
                cout<<x;
            }
        }
        else{
            int x=b*ceil((double)a/(2*b));
                cout<<x;
        }
    }
    return 0;
}