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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string h;cin>>h;
    string g=h;
    int n=h.length();
    int l=(int)(h[n-1])-48;
    
    V o,e;
    while(n--){
        int x=(int)(h[h.length()-1])-48;
        if(x%2==0)e.push_back(x);
        else o.push_back(x);
        h.pop_back();
    }
    int y=e.size(),z=o.size();
    if(y==0) {cout<<"-1\n";return 0;}
    int p=-1;
    for(int i=y-1;i>=0;i--){
        if(e[i]<l){p=e[i];break;}
    }
    if(p!=-1){
        char r=char(p+48);
        rep(i,0,g.length()){
            if(g[i]==r){swap(g[i],g[g.length()-1]);break;}
        }
    }
    else{
        for(int i=g.length()-1;i>=0;i--){
            if((int)(g[i]-48)%2==0){swap(g[i],g[g.length()-1]);break;}
        }
    }
    cout<<g;
    return 0;
}