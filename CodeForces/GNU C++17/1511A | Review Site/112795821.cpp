#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
#define din di(n)
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
using namespace std;
 
 
void solve(){
    din
    vector <int> arr(n);
    repin cin>>arr[i];
    cout<<count(all(arr),1)+count(all(arr),3)<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}