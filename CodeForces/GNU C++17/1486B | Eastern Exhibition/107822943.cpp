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
    while(t--){
        din
        vector<int> x(n),y(n);
        int xsum=0,ysum=0;
        rep(i,n){
            cin>>x[i]>>y[i];
            // xsum+=x[i];
            // ysum+=y[i];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int a=0,b=0;
        if(n%2==0){
            a=x[n/2]-x[(n/2)-1]+1;
            b=y[n/2]-y[(n/2)-1]+1;
            // if(a==0){
            //     a=1;
            // }
            // if(b==0){
            //     b=1;
            // }
        }
        else{
            a=1;
            b=1;
        }
        cout<<a*b<<"\n";
        // int p=xsum%n,q=ysum%n;
        // int a=0,b=0;
        // if(p==0){
        //     a=1;
        // }
        // if(xsum%2==1){
        //     a=2;
        // }
        // if(ysum%2==0){
        //     b=1;
        // }
        // if(ysum%2==1){
        //     b=2;
        // }
        // cout<<a*b<<"\n";
    }
    return 0;
}