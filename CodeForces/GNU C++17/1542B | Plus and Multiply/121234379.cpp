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
#define precise(i) cout<<fixed<<setprecision(i)
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define M 1000000000
using namespace std;
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    din dia dib
    if(b==1) cout<<"Yes\n";
    else if (a==1){
        if((n-1)%b==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    else{
        if((n-1)%b==0) {cout<<"Yes\n";return;}
        V arr;
        int x=1;
        while(x<=n){
            arr.push_back(x);
            x*=a;
        } 
        rep(i,0,arr.size()){
            if((n-arr[i])%b==0) {cout<<"Yes\n";return;}
        }
        cout<<"No\n";
    }
    
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}