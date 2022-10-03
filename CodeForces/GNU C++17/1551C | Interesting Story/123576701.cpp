#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
// #define int long long
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
    din
    vector <string> a(n);
    repin cin>>a[i];
    char x[5]={'a','b','c','d','e'};
    V tot;
    rep(i,0,5){
        // cout<<"a\n";
        char g=x[i];
        // cout<<g<<' '<<count(all(a[i]),g)<<' ';
        V h(n,0);
        rep(j,0,n) h[j]=2*count(all(a[j]),g)-a[j].length();
        sort(all(h),greater<int>());
        // rep(j,0,n) cout<<h[j]<<" ";
        int y=0,z=0;
        y+=h[0];
        rep(i,1,n){
            if(y>0){
                z++;
                y+=h[i];
            }
            else{
                tot.push_back(z);
                goto x;
            }
        }
        if(y>0)z++;
        tot.push_back(z);
        x:;
        // cout<<"\n";
    }
    // rep(i,0,5) cout<<tot[i]<<" ";
    sort(all(tot));
    cout<<tot.back()<<"\n";
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