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
#define take(a,n) for(int j=0;j<n;j++) cin>>a[j];
#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';
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
    dia dib dic di(m)
    int x,y,z;
    x=((max({a,b,c})>a+b+c-max({a,b,c}))?2*max({a,b,c})-a-b-c-1:0);
    // x/=2;
    // y=((b>=a+c)?b-a-c:0);
    // z=((c>=a+b)?c-b-a:0);
    int h,i,j;
    h=a-1;
    i=b-1;
    j=c-1;
    // cout<<x<<" : "<<h<<" "<<i<<" "<<j<<"\n"; 
    h=h+i+j;
    // x=min({x/2,y/2,z/2});
    if(m<=h && m>=x){
        // if(m==h-1)cout<<"NO\n";
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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