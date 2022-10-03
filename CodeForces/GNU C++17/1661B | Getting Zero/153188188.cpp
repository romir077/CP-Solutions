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
#define MOD 32768
#define el cout<<endl;
using namespace std;
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;}
    power = power * power;m = m >> 1;}
    return sum;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
int nextp(int x){
    int a=ceil(log2(x));
    return power(2,a);
}
 
void solve(){
    din
    int p=n;
    int x=nextp(n);
    // cout<<x<<" ";
    int ans=x-n+15-(int)log2(x);
    int temp=1;
    n*=2;
    n%=MOD;
    rep(i,0,100){
        int x=nextp(n);
        ans=min(ans,temp+x-n+15-(int)log2(x));
        n*=2;
        n%=MOD;
        temp++;
    }
    n=p;
    temp=0;
    rep(i,n,n+50){
        if(i>32768)break;
        int temp2=0;
        int o=i;
        while(o%32768!=0){
            o*=2;
            if(o==32768){temp2++;break;}
            o%=32768;
            temp2++;
            if(temp2>100)break;
            // cout<<i<<" ";
        }
        ans=min(ans,temp+temp2);
        temp++;
    }
    cout<<ans<<" ";
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