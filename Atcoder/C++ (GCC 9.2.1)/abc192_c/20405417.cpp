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

// void solve(){
//     int n1;
//     int temp=n1;
//     vector<int>a;
//     while(n1){
//         a.push_back(n1%10);
//         n1/=10;
//     }
//     sort(all(a));
//     int x;
//     rep(i,a.size()){
//         x+=a[i]*pow(10,i);
//     }
//     sort(all(a),greater<int>());
//     int y;
//     rep(i,a.size()){
//         y+=a[i]*pow(10,i);
//     }
//     int n1=x-y;
// }

signed main()
{
    di(n1) di(k)
    int flag=0;
    while(k--){
        int temp=n1;
        vector<int>a;
        while(n1){
            a.push_back(n1%10);
            n1/=10;
        }
        sort(all(a));
        int x=0;
        rep(i,a.size()){
            x+=a[i]*pow(10,i);
        }
        sort(all(a),greater<int>());
        int y=0;
        rep(i,a.size()){
            y+=a[i]*pow(10,i);
        }
        a.clear();
        n1=x-y;
        if(n1==temp){
            cout<<n1;
            flag=1;
            break;
        }
        if(n1==0){
            cout<<0;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n1;
    }
    return 0;
}