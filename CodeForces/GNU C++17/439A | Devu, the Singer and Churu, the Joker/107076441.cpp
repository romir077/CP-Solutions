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
    din diy
    int sum=0,arr[n];
    rep(i,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    int p=sum+10*(n-1);
    if(sum+10*(n-1)>y){cout<<-1;}
    else{cout<<2*(n-1)+(y-p)/5;}
    return 0;
}