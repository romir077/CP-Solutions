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
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
signed main()
{
    di(t)
    while(t--){
        di(p) dia dib di(c)
        int x=(p/a+1)*(a)-p,y=(p/b+1)*(b)-p,z=(p/c+1)*(c)-p;
        // if(p<=a || p<=b || p<=c){
        //     cout<<
        // }
        // if(x==p || y==p || z==p){
        //     cout<<0<<"\n";
        // }
        // else{
            
            if(x==a){
                cout<<0<<"\n";
            }
            else if(y==b){
                cout<<0<<"\n";
            }
            else if(z==c){
                cout<<0<<"\n";
            }
            else{
                cout<<min(x,min(y,z))<<"\n";    
            }
    }
    return 0;
}