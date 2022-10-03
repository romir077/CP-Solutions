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
    din
    sin
    V a(n+1,0),b(n+1,0);
    if(s[0]=='a')a[1]=1;
    if(s[0]=='b')b[1]=1;
    rep(i,2,n+1){
        if(s[i-1]=='a')a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    rep(i,2,n+1){
        if(s[i-1]=='b')b[i]=b[i-1]+1;
        else b[i]=b[i-1];
    }
    rep(i,1,n+1){
        rep(j,i,n+1){
            if(a[j]-a[i-1]==b[j]-b[i-1]){cout<<i<<" "<<j<<"\n";return;}
        }
    }
    cout<<"-1 -1\n";
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