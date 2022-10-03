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
        int arr[n];
        rep(i,n){
            cin>>arr[i];
        }
        int sum=0;
        int flag=1;
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1]-(i-1);
            if(arr[i]>=i){
                continue;
            }
            else{
                cout<<"NO\n";
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }
    }
    return 0;
}