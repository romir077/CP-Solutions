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
 
 
void solve(){
    din
    V a(n);
    repin cin>>a[i];
    int pre[n];
    pre[0]=a[0];
    rep(i,1,n){
        pre[i]=(a[i]^pre[i-1]);
    }
    if(pre[n-1]==0) {cout<<"YES\n";return;}
    else{
        rep(i,0,n-2){
            rep(j,i+1,n-1){
                if(pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n-1]^pre[j])) {cout<<"YES\n";return;}
            }
        }
        cout<<"NO\n";
        return;
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