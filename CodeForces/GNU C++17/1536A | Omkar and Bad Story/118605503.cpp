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
    int p=0,neg=0;
    int max=INT_MIN,min=INT_MAX;
    repin {
        cin>>a[i];
        if(a[i]>0) p++;
        if(a[i]<0) neg++;
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    if(neg>0) cout<<"NO\n";
    else{
        if(min>=0) {
            cout<<"YES\n";
            cout<<max+1<<"\n";
            rep(i,0,max+1) cout<<i<<" ";
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