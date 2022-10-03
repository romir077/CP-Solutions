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
    di(t)
    while(t--){
        din
        int arr[n];
        rep(i,n){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            double x=(double)max(arr[i],arr[i+1])/(double)min(arr[i],arr[i+1]);
            while(x>2){
                x/=2;
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}