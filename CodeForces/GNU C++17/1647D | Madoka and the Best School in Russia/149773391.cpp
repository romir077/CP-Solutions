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
 
bool isPrime(int x){
    if(x==1 || x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0)return false;
    }
    return true;
}
 
void solve(){
    dix di(d)
    int ok=0;
    if(isPrime(d)){
        int freq=0;
        while(x%d==0){
            x/=d;freq++;
        }
        if(freq>=2){
            if(!isPrime(x))ok=1;
        }
    }
    else{
        int freq=0;
        while(x%d==0){
            x/=d;freq++;
        }
        if(freq==2){
            if(!isPrime(x))ok=1;
        }
        else if(freq==3){
            if(!isPrime(x))ok=1;
            else if(x*x!=d)ok=1;
        }
        else if(freq>3)ok=1;
    }
    cout<<((ok==1?"YES\n":"NO\n"));
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