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
    din di(m)
    vpii a(n);
    int sum=0;
    repin cin>>a[i].first,a[i].second=i+1,sum+=a[i].first;
    if(m<n){cout<<"-1\n";return;}
    if(n==2) cout<<"-1\n";
    if(n==3){
        cout<<2*(a[0].first+a[1].first+a[2].first)<<"\n";
        cout<<3<<" "<<"2\n";
        cout<<1<<" "<<"2\n";
        cout<<1<<" "<<"3\n";
    }
    sort(all(a));
    if(n>=4){
        cout<<2*sum+(m-n)*(a[0].first+a[1].first)<<"\n";;
        rep(i,0,n-1) cout<<a[i].second<<" "<<a[i+1].second<<"\n";
        cout<<a[n-1].second<<" "<<a[0].second<<"\n";
        rep(i,0,m-n){
            cout<<a[0].second<<" "<<a[1].second<<"\n";
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