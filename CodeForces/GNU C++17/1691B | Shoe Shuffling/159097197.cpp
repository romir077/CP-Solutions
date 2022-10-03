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
 
void rotate(vector<int>&arr, int n,int s)
{
    int x = arr[s+n - 1], i;
    for (i = s+n - 1; i > s; i--)
    arr[i] = arr[i - 1];
    arr[s] = x;
}
 
void solve(){
    din V a(n);
    take(a,n);
    map<int,int>mp;
    repin{
        mp[a[i]]++;
    }
    for(auto i:mp){
        if(i.second==1){cout<<"-1\n";return;}
    }
    V b;
    b.push_back(0);
    rep(i,1,n){
        if(a[i]!=a[i-1]){
            b.push_back(i);
        }
    }
    b.push_back(n);
    V c(n);
    repin{
        c[i]=i+1;
    }
    rep(i,1,b.size()){
        int sizee=b[i]-b[i-1];
        int s=b[i-1];
        rotate(c,sizee,s);
    }
    // give(b,b.size());
    // cout<<"\n";
    give(c,n);
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