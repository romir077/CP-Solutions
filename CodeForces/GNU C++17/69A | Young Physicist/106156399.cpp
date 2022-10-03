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
    int arr[n*3];
    rep(j,n*3){
        cin>>arr[j];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n*3-2;i+=3){
        sum1+=arr[i];
        sum2+=arr[i+1];
        sum3+=arr[i+2];
    }    
    if(sum1==0 && sum2==0 && sum3==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}