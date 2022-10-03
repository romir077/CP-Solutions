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
#define MOD 1000000007
using namespace std;


int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}

int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(k) V a(n);take(a,n);
    V c(n,INT_MAX);
    c[0]=0;
    // c[1]=abs(a[1]-a[0]);
    rep(i,0,min(n,k)){
        rep(j,i+1,min(n,k+1))
            c[j]=min(c[j],c[i]+abs(a[j]-a[i]));
    }
    rep(i,k+1,n){
        rrep(j,i-1,i-k){
            c[i]=min(c[i],c[j]+abs(a[j]-a[i]));
        }
    }
    cout<<c[n-1]<<"\n";
    // give(c,n);
    // cout<<c[n-1]<<"\n";
    return 0;
}