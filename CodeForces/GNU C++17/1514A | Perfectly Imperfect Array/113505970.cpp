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
        vector <int> arr(n);
        rep(i,n) cin>>arr[i];
        int flag=0;
        rep(i,n){
            if(sqrt(arr[i])!=ceil(sqrt(arr[i]))) flag=1;
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}