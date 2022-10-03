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
    din sin
    if(n==1){
        if(s[0]!='W'){cout<<"NO\n";}
        else cout<<"YES\n";
    }
    else if(n==2){
        if(s=="RB" || s=="BR" || s=="WW")cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        if(((s[0]=='R' || s[0]=='B')&&s[1]=='W') || ((s[n-1]=='R' || s[n-1]=='B') && s[n-2]=='W')){cout<<"NO\n";return;}
        rep(i,0,n-2){
            if(s[i]=='W' && s[i+2]=='W' && (s[i+1]=='R' || s[i+1]=='B')){cout<<"NO\n";return;}
        }
        V b;
        b.push_back(-1);
        rep(i,0,n){
            if(s[i]=='W')b.push_back(i);
        }
        b.push_back(n);
        rep(i,0,b.size()-1){
            int r=0,B=0;
            rep(j,b[i]+1,b[i+1]){
                if(s[j]=='R')r++;
                else B++;
            }
            if((B==0 && r!=0) || (B!=0 && r==0)){cout<<"NO\n";return;}
        }
        cout<<"YES\n";
    }
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