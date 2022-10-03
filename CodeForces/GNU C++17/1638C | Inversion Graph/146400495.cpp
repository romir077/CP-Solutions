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
    din V a(n);take(a,n);
    int pos[n+1];
    repin{
        pos[a[i]]=i+1;
    }
    V b=a;
    rep(i,1,n){
        b[i]=max(b[i-1],b[i]);
    }
    int ans=1;
    int x=a.back(),temp=1;
    rrep(i,n-2,0){
        if(b[i]==x){
        }
        else{
            x=b.back()-temp;
            // cout<<x<<" "<<b[i];
            if(b[i]==x){
                ans++;
            }
            else{
                x=b[i];
            }
        }
        temp++;
    }
    cout<<ans<<"\n";
    // cout<<s.size()<<"\n";
    // map<int,vector<int>>mp;
    // int nmax=a[0],omax=1;
    // repin{
    //     rrep(i,nmax,omax){
    //         mp[]
    //     }
 
    //     omax=nmax;
 
    // }
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