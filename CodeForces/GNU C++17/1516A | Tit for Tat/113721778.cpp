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
 
 
void solve(){
    din di(k)
    V arr(n);
    repin cin>>arr[i];
    int a=0;
    rep(i,0,k){
        if(arr[a]>0){
            x :
                ;
            arr[a]--;
            arr[n-1]++;
        }
        else {
            y :
                ;
            a++;
            if(a==n-1) break;
            if(arr[a]>0) goto x;
            else goto y;
        }
    }
    repin cout<<arr[i]<<" ";
    cout<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}