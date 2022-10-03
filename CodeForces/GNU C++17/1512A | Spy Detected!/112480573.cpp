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
    din
    V arr(n);
    repin cin>>arr[i];
    int a=arr[0];
    if(arr[1]!=a){
        if(arr[2]!=a) cout<<"1\n";
        else cout<<"2\n";
    }
    else{
        rep(i,2,n){
            if(arr[i]==a) continue;
            else cout<<i+1<<"\n";
        }
    }
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}