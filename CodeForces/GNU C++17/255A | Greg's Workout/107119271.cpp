#include<bits/stdc++.h>
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
    int a=0,b=0,c=0;
    int arr[n];
    rep(i,n){
        cin>>arr[i];
        if(i%3==0) a+=arr[i];
        if(i%3==1) b+=arr[i];
        if(i%3==2) c+=arr[i];
    }
    if(a>b && a>c) {cout<<"chest";}
    else if(b>c && b>a) cout<<"biceps";
    else{
        cout<<"back";
    }
 
    return 0;
}