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
using namespace std;
 
signed main()
{
    din 
    int arr[n],brr[n];
    rep(i,n){
        cin>>arr[i]>>brr[i];
    }
    int x=0;
    rep(i,n){
        rep(j,n){
            if(arr[i]==brr[j]){
                x++;
            }
        }
    }
    cout<<x;
    return 0;
}