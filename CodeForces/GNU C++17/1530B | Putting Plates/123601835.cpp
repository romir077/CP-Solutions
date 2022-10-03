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
using namespace std;
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    dia dib
    if(a%2==1){
        rep(i,0,a){
            if(i%2==0){
                if(i==0 || i==a-1){
                    rep(j,0,b){
                        if(j%2==0) cout<<1;
                        else cout<<0;
                    }
                }
                else{
                    rep(j,0,b){
                        if(j==0 || j==b-1)cout<<1;
                        else cout<<0;
                    }
                }
            }
            else rep(i,0,b) cout<<0;
            cout<<"\n";
        }
    }
    else{
        rep(i,0,a){
            if((i==0 || i==a-1) || (i%2==0 && i<a-3)){
                if(i==0 || i==a-1){
                    rep(j,0,b){
                        if(j%2==0) cout<<1;
                        else cout<<0;
                    }
                }
                else{
                    rep(j,0,b){
                        if(j==0 || j==b-1)cout<<1;
                        else cout<<0;
                    }
                }
            }
            else rep(i,0,b) cout<<0;
            cout<<"\n";
        }
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