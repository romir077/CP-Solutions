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
#define el cout<<endl;
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
// int p=power(2,17);
int xora[131072];
 
void solve(){
    di(l) di(r)
    V a(r-l+1);
    take(a,r-l+1);
    int n=r-l+1;
    sort(all(a));
    V b(18,0),c(18,0);
    repin{
        rep(j,0,18){
            b[j]+=(a[i]&1);
            a[i]/=2;
        }
    }
    repin{
        int x=i;
        rep(j,0,18){
            c[j]+=(x&1);
            x/=2;
        }
    }
    int ans=0;
    // give(b,n);cout<<"\n";
    // give(c,n);cout<<"\n";
    rep(i,0,18){
        if(b[i]!=c[i])ans+=(power(2,i));
    }
    cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    xora[0]=0;
    rep(i,1,131072){
        xora[i]=(xora[i-1]^i);
    }
    while(t--){
        solve();
    }
    return 0;
}