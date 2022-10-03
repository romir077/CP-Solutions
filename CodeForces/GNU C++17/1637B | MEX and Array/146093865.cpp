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
 
void solve(){
    din
    V a(n);
    take(a,n);
    int ans=0;
    rep(i,1,n+1){
        rep(j,0,n-i+1){
            // int y=1;
            V b;
            int f1=0,f2=0;
            rep(k,j,j+i){
                // if(a[k]!=0){
                //     if(f1==0){
                //         b.push_back(1);
                //         f1++;
                //     }
                //     // else{
                //     //     f1++;
                //     // }
                //     f2=0;
                // }
                // else{
                //     if(f2==0){
                //         b.push_back(0);
                //         f2++;
                //     }
                //     // else{
                //     //     f2++;
                //     // }
                //     f1=0;
                // }
                b.push_back(a[k]);
            }
            // give(b,b.size());
            // cout<<endl;
            ans+=b.size()+count(all(b),0);
        }
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