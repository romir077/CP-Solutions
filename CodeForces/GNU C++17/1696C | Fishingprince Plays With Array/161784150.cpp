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
    din di(m)
    V a(n);
    take(a,n);
    di(k)
    V b(k);
    take(b,k);
    if(m==1){
        if(a==b)cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    // map<int,int>mp;
    // int i=0,j=0;
    vpii x,y;
    repin{
        int temp=1;
        while(a[i]%m==0){
            a[i]/=m;
            temp*=m;
        }
        x.push_back({a[i],temp});
        // else x.push_back({a[i]/m,m});
    }
    rep(i,0,k){
        int temp=1;
        while(b[i]%m==0){
            b[i]/=m;
            temp*=m;
        }
        y.push_back({b[i],temp});
    }
    vpii p,q;
    rep(i,0,x.size()){
        int g=x[i].first;
        int f=0;
        while(i<x.size()){
            if(x[i].first==g){
                f+=x[i].second;
                i++;
            }
            else break;
        }
        p.push_back({g,f});
        i--;
    }
    rep(i,0,y.size()){
        int g=y[i].first;
        int f=0;
        while(i<y.size()){
            if(y[i].first==g){
                f+=y[i].second;
                i++;
            }
            else break;
        }
        q.push_back({g,f});
        i--;
    }
    if(p==q)cout<<"YES\n";
    else cout<<"NO\n";
 
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