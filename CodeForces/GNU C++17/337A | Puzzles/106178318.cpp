#include<iostream>
#include<algorithm>
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
    din dix
    int arr[x];
    rep(i,x){
        cin>>arr[i];
    }
    sort(arr,arr+x);
    int min=2000;
    rep(i,x-n+1){
        if(abs(arr[i]-arr[i+n-1])<min){
            min=abs(arr[i]-arr[i+n-1]);
        }
    }   
    cout<<min<<"\n";
    return 0;
}