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
    din dic
    V a(n);
    take(a,n);
    set<int>s;
    repin s.insert(a[i]);
    V cnt(c+1,0);
    repin{
        cnt[a[i]]=1;
    }
    V r;
    int rz=0;
    rep(i,1,c+1){
        if(cnt[i]==0){rz++;r.push_back(i);}
    }
    if(rz==0){cout<<"Yes\n";return;}
    rep(i,1,c+1){
        cnt[i]+=cnt[i-1];
    }
    // sort(all(a));
    int p=rz;
    int j=0;
    for(auto i:s){
        int l=i;
        while(j<p && r[j]*l<=c){
            if(cnt[min(c,(l*(r[j]+1))-1)]-cnt[r[j]*l-1]>0){cout<<"NO\n";return;}
            j++;
        }
        j=0;
    }
    cout<<"YES\n";
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