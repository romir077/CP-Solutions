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
 
void solve(){
    dia dib dic
    dix diy diz
    int ans=0;
    int fl=a+(c-1)*b,sl=x+(z-1)*y;
    if(x<a || sl>fl){cout<<"0\n";return;}
    if((x-a)%b!=0){cout<<"0\n";return;}
    if((y%b)!=0){cout<<"0\n";return;}
    if(x-y<a || x+(y)*z > a+(c-1)*b){cout<<"-1\n";return;}
    
    V cc;
    for (int i=1; i*i<=y; i++)
    {
        if (y%i == 0)
        {
            if (y/i == i)cc.push_back(i);
            else {cc.push_back(i);cc.push_back(y/i);}
        }
    }
    // int p=1;
    for(auto p:cc){
        // if(b%p==0){p++;continue;}
        if(p*b==__gcd(p,b)*y)ans+=(y/p)*(y/p);
        ans%=MOD;
        // p++;
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
    while(t--){
        solve();
    }
    return 0;
}