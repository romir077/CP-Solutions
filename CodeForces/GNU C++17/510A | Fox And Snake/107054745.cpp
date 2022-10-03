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
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    dix diy int a=0;
    rep(i,x){
        if(i%2==0){
            rep(i,y){
                cout<<"#";
            }
            //cout<<"\n";
        }
        else{
            if(a%2==0){
                rep(i,y-1){
                    cout<<".";
                }
                cout<<"#";a++;
            }
            else{
                cout<<"#";
                rep(i,y-1){
                    cout<<".";
                }
                a++;
            }
            //cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}