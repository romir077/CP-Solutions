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
    rrep(i,n-1,1){
        if(s[i]==r[i])continue;
        if(s[i]=='a'){cout<<"NO\n";return;}
        // if(s[i]=='c' && s[i-1]=='b'){
        //     if(r[i]!='b'){cout<<"NO\n";return;}
        //     swap(s[i],s[i-1]);
        // }
        // else if(s[i]=='b' && s[i-1]=='a'){
        //     if(r[i]!='a'){cout<<"NO\n";return;}
        //     swap(s[i],s[i-1]);
        // }
        int j=i;
        while(s[j]!=r[i] && s[j]==s[i] && j>0)j--;
        if(s[j]=='a' && s[i]=='c'){cout<<"NO\n";return;}
        if(s[j]=='c' && s[i]=='b'){cout<<"NO\n";return;}
        if(s[j]!=r[i]){cout<<"NO\n";return;}
        else swap(s[j],s[i]);
    }
    // cout<<s<<"\n"<<r;
    if(s[0]!=r[0]){cout<<"NO\n";return;}
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