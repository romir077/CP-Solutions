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
    dix diy dia dib
    if(a!=x && y!=b){
        if(abs(a-x)==abs(b-y)){
            cout<<x<<" "<<b<<" "<<a<<" "<<y;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(x==a){
            cout<<x+abs(y-b)<<" "<<y<<" "<<x+abs(y-b)<<" "<<b;
        }
        if(y==b){
            cout<<x<<" "<<y+abs(x-a)<<" "<<a<<" "<<y+abs(x-a);
        }
    }
    return 0;
}