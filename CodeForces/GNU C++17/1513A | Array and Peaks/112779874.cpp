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
    if(k==0) {
        rep(i,0,n) cout<<i+1<<" ";
        cout<<"\n";
    }
    else{
        if(n==1 || n==2) cout<<"-1\n";
        else{
            if(ceil((double)(n-2)/(double)2)<k) cout<<"-1\n";
            else{
                rep(i,0,2*k+1){
                    if(i%2==0) cout<<i/2+1<<" ";
                    else{cout<<k*2+1-(i/2)<<" ";}
                }
                rep(i,2*k+1,n) cout<<i+1<<" ";
                cout<<"\n";
            }
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