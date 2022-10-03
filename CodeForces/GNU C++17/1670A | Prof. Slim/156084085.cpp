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
    din V a(n);
    take(a,n);
    int neg=0;
    repin{
        if(a[i]<0)neg++;
    }
    rep(i,0,neg){
        if(a[i]>0)a[i]*=-1;
    }
    rep(i,neg,n){
        a[i]=abs(a[i]);
    }
    // give(a,n);
    if(neg==0){
        V g=a;
        sort(all(g));
        if(g==a){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    V b,d;
    rep(i,0,neg){
        b.push_back(a[i]);
    }
    V c=b;
    if(neg==n){
        V g=a;
        sort(all(g));
        if(g==a){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
 
    sort(all(c));
    rep(i,neg,n){
        d.push_back(a[i]);
    }
    V e=d;
    // give(b,b.size());cout<<"\n";
    // give(c,c.size());cout<<"\n";
    // give(d,d.size());cout<<"\n";
    // give(e,e.size());cout<<"\n";
    sort(all(e));
    if(b==c && d==e){
        cout<<"YES\n";
    }
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