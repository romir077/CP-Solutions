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
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    din
    int arr[n],even=0,x,y,odd=0;
    rep(i,n){
        cin>>arr[i];
        if(arr[i]%2==0){
        even++;x=i;}
        else{
        odd++;y=i;}
    }
    if(even==1)
    cout<<x+1;
    else
    cout<<y+1;
    return 0;
}