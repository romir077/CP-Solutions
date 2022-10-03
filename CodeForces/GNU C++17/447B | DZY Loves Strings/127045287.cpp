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
    sin
    di(k)
    V f;
    map<int,char>a;
    map<char,int>b;
    rep(i,0,26){
        dix
        f.push_back(x);
        b[(char)(97+i)]=x;
    }
    int tot=0;
    rep(i,0,s.length()){
        tot+=b[s[i]]*(i+1);
    }
    sort(all(f),greater<int>());
    int n=s.length();
    rep(i,0,k){
        tot+=f[0]*(n+1+i);
    }
    cout<<tot<<"\n";
    return 0;
}