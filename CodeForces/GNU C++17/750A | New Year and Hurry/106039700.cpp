#include<iostream>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define dai(a) int a;cin>>a;
using namespace std;
 
signed main()
{
    dai(a) dai(b)
    int c=240-b,x=1;
    while(c>0){
        c-=5*x;
        x++;
    }
    if(c==0){
        if(x-1>a){
            cout<<a;
        }
        else{
        cout<<x-1;
        }
    }
    else{
        if(x-2>a){
            cout<<a;
        }
        else{
        cout<<x-2;
        }
    }
    return 0;
}