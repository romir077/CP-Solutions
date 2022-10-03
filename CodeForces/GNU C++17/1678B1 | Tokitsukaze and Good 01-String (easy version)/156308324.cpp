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
    int x=1;
    char c=s[0];
    V a;
    rep(i,1,n){
        if(s[i]==c)x++;
        else{
            a.push_back(x);
            c=s[i];
            x=1;
        }
    }
    a.push_back(x);
    // give(a,a.size());cout<<"\n";
    bool ans=true;
    for(auto i:a){
        if(i%2==1)ans=false;
    }
    if(ans){
        cout<<"0\n";
    }
    else{
        V b;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==1)b.push_back(i);
        }
        int r=0;
        // give(b,b.size());ṇcout<<'\n';
        for(int i=0;i<b.size();i+=2){
            r+=b[i+1]-b[i];
        }
        cout<<r<<"\n";
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