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
    di(W) di(H)
    dia dib dic di(d)
    di(w) di(h)
    int x=abs(a-c);
    int y=abs(b-d);
    if(w+x>W && h+y>H){
        cout<<"-1\n";
    }
    else{
        int k,l;
        k=H-d;
        l=W-c;
        l=max(l,a);
        k=max(k,b);
        int f=INT_MAX,g=INT_MAX;
        if(W>=x+w && l<w) f=w-l;
        if(H>=y+h && k<h) g=h-k;
        if(l>=w || k>=h) precise(9)<<0<<"\n";
        else{
            // int p,q;
            // p=abs(h-k);
            // q=abs(w-l);
            // int z=sqrt(p*p+q*q);
            precise(9)<<min(f,g)<<"\n";
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