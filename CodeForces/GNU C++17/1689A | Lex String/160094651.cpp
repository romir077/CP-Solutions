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
    din di(m) di(k)
    sin string r;cin>>r;
    sort(all(s));
    sort(all(r));
    int i=0,j=0;
    string c="";
    int cons=0,conr=0;
    c+=min(s[0],r[0]);
    if(s[0]<r[0]){cons++;i++;}
    else {j++;conr++;}
    while(i<n && j<m){
        if(s[i]<r[j]){
            cons++;conr=0;
            if(cons<=k){c+=s[i];i++;}
            else {cons=0;conr=1;c+=r[j];j++;}
        }
        else{
            conr++;
            cons=0;
            if(conr<=k){c+=r[j];j++;}
            else {conr=0;cons=1;c+=s[i];i++;}
        }
    }
    cout<<c<<"\n";
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