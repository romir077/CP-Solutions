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
    if(n==1) cout<<"1\n";
    else if(n==2) cout<<"-1\n";
    else{
        int a=1;
        rep(i,0,n){
            rep(j,0,n){
                if(a<=n*n) cout<<a<<" ";
                if(a>n*n && n%2==0){cout<<a-n*n+1<<" ";}
                if(a>n*n && n%2==1){cout<<a-n*n<<" ";}
                a+=2;
            }
            cout<<"\n";
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