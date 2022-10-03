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
 
#define M 998244353
const int N = 200005;
 
ll fact[N];
 
void pre(){
 fact[0] = 1;
 rep(i,1,N){
  fact[i] = (fact[i-1] * i) % M;
 }
}
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum = (sum * power) % M;}
    power = (power * power)%M;m = m >> 1;}
    return sum%M;
}
 
void solve(){
    din V a(n);
    take(a,n)
    sort(all(a));
    if(a[n-1]==a[n-2])cout<<fact[n]%M<<"\n";
    else if(a[n-1]>a[n-2]+1) cout<<"0\n";
    else{
        int x=count(all(a),a[n-2]);   
        int sum=1;
        rep(i,1,n+1){
            if(i==x+1)continue;
            else sum*=i;
            sum%=M;
        }
        sum*=x;
        sum%=M;
        cout<<sum<<"\n";
        
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pre();
    di(t)
    while(t--){
        solve();
    }
    return 0;
}