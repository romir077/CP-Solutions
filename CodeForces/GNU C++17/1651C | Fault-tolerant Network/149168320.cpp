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
    din 
    V a(n),b(n);
    take(a,n);
    take(b,n);
    int pt,qt,rt,st;
    int p=a[0],q=a[n-1],r=b[0],s=b[n-1];
    int x=INT_MAX,y=-1;
    repin{
        if(abs(p-b[i])<=x){x=abs(p-b[i]);y=i;}
    }
    // cout<<x<<" "<<y<<"\n";
    pt=x;
    x=INT_MAX,y=-1;
    repin{
        if(abs(q-b[i])<=x){x=abs(q-b[i]);y=i;}
    }
    // cout<<x<<" "<<y<<"\n";
    qt=x;
    x=INT_MAX,y=-1;
    repin{
        if(abs(r-a[i])<=x){x=abs(r-a[i]);y=i;}
    }
    // cout<<x<<" "<<y<<"\n";
    rt=x;
    x=INT_MAX,y=-1;
    repin{
        if(abs(s-a[i])<=x){x=abs(s-a[i]);y=i;}
    }
    // cout<<x<<" "<<y<<"\n";
    st=x;
    int ans=INT_MAX;
    ans=min(ans,abs(p-r)+abs(q-s));
    ans=min(ans,abs(p-s)+abs(q-r));
    ans=min(ans,abs(p-r)+qt+st);
    ans=min(ans,abs(q-s)+pt+rt);
    ans=min(ans,abs(p-s)+qt+rt);
    ans=min(ans,abs(q-r)+pt+st);
    ans=min(ans,pt+rt+qt+st);
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