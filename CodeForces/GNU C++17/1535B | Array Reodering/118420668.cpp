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
    int sum=0,odd=0,ev=0;
    V od;
    repin{
        if(a[i]%2==0) ev++;
        if(a[i]%2==1) {odd++;od.push_back(a[i]);}
    }
    sort(all(od),greater<int>());
    int x=n;
    rep(i,0,ev){
        sum+=(x-1);
        x--;
    }
    rep(i,0,odd-1){
        rep(j,i+1,odd){
            if(__gcd(od[i],od[j])>1) sum++;
        }
    }
    cout<<sum<<"\n";
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