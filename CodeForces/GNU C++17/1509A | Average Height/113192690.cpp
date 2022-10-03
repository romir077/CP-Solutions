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
        din
        vector <int> a(n),odd,even;
        rep(i,n){
            cin>>a[i];
            if(a[i]%2==0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        rep(j,odd.size()) cout<<odd[j]<<" ";
        rep(j,even.size()) cout<<even[j]<<" ";
        cout<<"\n";
    }
    return 0;
}