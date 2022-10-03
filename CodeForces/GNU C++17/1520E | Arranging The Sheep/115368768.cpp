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
    sin
    V a;
    rep(i,0,n){
        if(s[i]=='*') a.push_back(i);
    }
    int sum=0;
    int p=a.size();
    if(p==0) {cout<<0<<"\n";return;}
    if(p%2==1){
        for(int i=1;i<=p/2;i++){
            sum+=a[p/2]-a[p/2-i]-i;
        }
        for(int i=1;i<=p/2;i++){
            sum+=a[p/2+i]-a[p/2]-i;
        }
        cout<<sum<<"\n";
    }
    else{
        for(int i=1;i<p/2;i++){
            sum+=a[p/2-1]-a[p/2-1-i]-i;
        }
        for(int i=1;i<p/2;i++){
            sum+=a[p/2+i]-a[p/2]-i;
        }
        sum+=(p/2)*(a[p/2]-a[p/2-1]-1);
        cout<<sum<<"\n";
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