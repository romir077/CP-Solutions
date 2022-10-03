#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
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
#define take(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define give(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define db double
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    sin
    int n=s.length();
    V m;
    rep(i,1,n){
        if(s[i]==s[i-1])continue;
        else{
            if(s[i]=='1')m.push_back(0);
            else m.push_back(1);
        }
    }
    if(s[n-1]=='0')m.push_back(0);
    if(s[n-1]=='1')m.push_back(1);
 
    int x=count(all(m),0);
    if(x==0)cout<<0<<"\n";
    if(x==1)cout<<1<<"\n";
    if(x>=2)cout<<2<<"\n";
 
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