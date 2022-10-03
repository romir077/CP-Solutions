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
    V b;
    // int tot=0;
    rep(i,1,n-1){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            b.push_back(i);
            // tot++;
        }
    }
    int i=0;
    int x=b.size();
    int ans=0;
    rep(i,0,x){
        if(i+1<x){
            ans++;
            if(b[i+1]==b[i]+2){
                if(a[b[i]]<a[b[i+1]])a[b[i]+1]=a[b[i+1]];
                else a[b[i]+1]=a[b[i]];
                i++;
            }
            else{
                a[b[i]+1]=a[b[i]];
            }
        }
        else{
            ans++;
            if(i<x)a[b[i]+1]=a[b[i]];
        }
    }
    cout<<ans<<"\n";
    give(a,n);
    cout<<"\n";
 
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