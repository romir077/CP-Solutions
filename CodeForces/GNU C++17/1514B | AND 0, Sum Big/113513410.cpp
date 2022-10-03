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
        din di(k)
        int a=1,b=1,z=n;
        rep(i,9) b*=10;
        b=b+7;
        rep(i,k-1){
            z=(z*n)%b;
        }
        cout<<z<<"\n";
    }
    return 0;
}