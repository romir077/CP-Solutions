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
    vpii a(n);
    V pre(n);
    repin cin>>a[i].first,a[i].second=i;
    sort(all(a));
    pre[0]=a[0].first;
    rep(i,1,n){
        pre[i]=pre[i-1]+a[i].first;
    }
    int cnt=1;
    V c;
    c.push_back(a[n-1].second+1);
    for(int i=n-2;i>=0;i--){
        if(pre[i]>=a[i+1].first) {c.push_back(a[i].second+1);cnt++;}
        else break;
    }
    sort(all(c));
    cout<<cnt<<"\n";
    rep(i,0,c.size()){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
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