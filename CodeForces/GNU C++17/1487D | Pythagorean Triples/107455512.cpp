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
        dia
        int x=floor(sqrt(2*a-1));
        if(x<3){
            cout<<0<<"\n";
        }
        else{
            if(x%2==0)
            cout<<(x/2)-1<<"\n";
            else
            cout<<x/2<<"\n";
        }
    }
    return 0;
}