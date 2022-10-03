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
    V y,x;
    rep(i,0,2*n){
        dia dib
        if(a==0){
            if(b<0) b*=-1,y.push_back(b);
            else y.push_back(b);
        }
        else{
            if(a<0) a*=-1,x.push_back(a);
            else x.push_back(a);
        }
    }
    sort(all(y));
    sort(all(x));
    double sum=0;
    rep(i,0,n){
        sum+=sqrt(y[i]*y[i]+x[i]*x[i]);
    }
    precise(15)<<sum<<"\n";
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