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
    din sin string r;cin>>r;
    int a=0,b=0,c=0,d=0;
    repin{
        if(s[i]=='0' && r[i]=='1')a++;
        if(s[i]=='1' && r[i]=='0')b++;
        if(s[i]=='1' && r[i]=='1')c++;
        if(s[i]=='0' && r[i]=='0')d++;
    }
    int u=0,l=0;
    repin{
        if(s[i]=='1')u++;
        if(r[i]=='1')l++;
    }
    int p=INT_MAX,q=INT_MAX;
    if(u==l){
        p=a+b;
    }
    
        if(c>0){
            if(a+d+1==a+c)q=c+d;
        }
        else{
            if(b>0)if(1+a+d==a+c)q=c+d+1;
        }
    
    if(min(p,q)==INT_MAX)cout<<"-1\n";
    else cout<<min(p,q)<<"\n";
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