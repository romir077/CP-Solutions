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
    di(t)
    rep(i,t){
        di(l) di(r)
        int x=r-2*l+1;
        if(x>0)
        cout<<(x*(x+1))/2<<"\n";
        else{
            cout<<0<<"\n";
            continue;
        }
    }
    return 0;
}