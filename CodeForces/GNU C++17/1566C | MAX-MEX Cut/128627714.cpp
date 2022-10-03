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
#define take(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define give(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define db double
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    din
    sin
    string r;cin>>r;
    V a(n+1);
    repin{
        if(s[i]==r[i] && s[i]=='0')a[i]=1;
        if(s[i]==r[i] && s[i]=='1')a[i]=0;
        if(s[i]!=r[i])a[i]=2;
    }
    a[n]=-1;
    // repin cout<<a[i]<<" ";
    // cout<<endl;
    int x=2*count(all(a),2),y=0;
    rep(i,0,n){
        if((a[i]==0 && a[i+1]==1) || (a[i]==1 && a[i+1]==0)){y++;i++;}
        else if(a[i]==1)x++;
        else continue;
    }
    
    
    x+=2*y;
    cout<<x<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}