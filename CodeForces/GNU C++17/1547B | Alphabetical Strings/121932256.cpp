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
    sin
    int x=-1,n=s.length();
    repin{
        if(s[i]=='a') {x=i;break;}
    }
    if(x==-1) {cout<<"NO\n";return;}
    else{
        int p=x,q=x;
        rep(i,0,n){
            int f=0;
            char c=(char)(i+'a');
            if(s[p]==c && p>=0) {p--;f=1;}
            if(s[q]==c && q<n) {q++;f=1;}
            if(f==0){cout<<"NO\n";return;}
        }
        if(q==n && p==-1) cout<<"YES\n";
        else cout<<"NO\n";
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