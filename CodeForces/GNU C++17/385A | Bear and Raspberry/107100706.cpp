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
    din di(c)
    int arr[n];
    rep(i,n){
        cin>>arr[i];
    }
    int p=0;
    rep(i,n-1){
        if(arr[i+1]>=arr[i]){continue;}
        else{
            if(arr[i]-arr[i+1]-c>p){
                p=arr[i]-arr[i+1]-c;
            }
        }
    }
    cout<<p<<"\n";
    return 0;
}