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
    rep(k,n){
        dia
        int arr[a];
        rep(i,a){
            cin>>arr[i];
        }
        if(a==2 && arr[0]==arr[1]){
            cout<<0<<"\n";
            continue;
        }
        sort(arr,arr+a);
        int l=1;
        for(int i=1;i<a;i++){
            if(arr[0]==arr[i]){
                l+=1;
            }
            else{
                break;
            }
        }
        // if(l==1) cout<<0<<"\n";
        // else
        cout<<a-l<<"\n";
    }
    return 0;
}