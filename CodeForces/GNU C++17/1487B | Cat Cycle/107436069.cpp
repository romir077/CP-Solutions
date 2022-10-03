#include<bits/stdc++.h>
#include<iostream>
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
#define db double
#define all(x) x.begin(),x.end()
using namespace std;
signed main()
{
    din
    rep(i,n){
        dia dib
        if(a%2==0){
            int x=b%a;
            if(x!=0)
            cout<<x<<"\n";
            else
            cout<<a<<"\n";
        }
        else{
            int x=a/2;
            int y=b/x;
            int z=b%x;
            if(z==0){
                b+=(y-1);
                int l=b%a;
                if(l!=0)
                {cout<<l<<"\n";}
                else
                {cout<<a<<"\n";}
            }
            else{
                b+=y;
                int l=b%a;
                if(l!=0)
                {cout<<l<<"\n";}
                else
                {cout<<a<<"\n";}
 
            }
        }
    }
    return 0;
}