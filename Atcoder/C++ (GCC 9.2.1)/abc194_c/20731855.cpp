#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;

signed main()
{
    din
    V arr(n);
    int x=0,y=0;
    repin{
        cin>>arr[i];
        x+=arr[i];
        y+=arr[i]*arr[i];
        // arr[i]*=n;
    }
    // int sum=0;
    // rep(i,0,n){
    //     sum+=abs(pow(x-arr[i],2));
    // }
    // rep(i,1,n){
    //     rep(j,0,i){
    //         sum+=(arr[i]-arr[j])*(arr[i]-arr[j]);
    //     }
    // }
    cout<<y*n-x*x<<"\n";
    return 0;
}