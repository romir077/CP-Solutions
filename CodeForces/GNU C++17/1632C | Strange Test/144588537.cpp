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
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
int setBitNumber(int n)
{
    int k = (int)(log2(n));
    return 1 << k;
}
 
int func(int a,int b){
    if(a==b)return 0;
    if(a>b)return a-b;
    int x=setBitNumber((a^b))-1;
    return func(a&x,b&x);
}
 
void solve(){
    dia dib
    int ans=INT_MAX;
    rep(i,a,b+1){
        // int temp1=0;
        if(i==b)ans=min(ans,b-a);
        else{
            // int temp+=i-a;
            // int temp1=i-a+((i|b)-b)+1;
            int temp2=i-a+1+func(i,b);
            ans=min(ans,temp2);
        }
        // cout<<ans<<" "<<temp<<"\n";
    }
    // 001101110101100110
    // 101000001001000110
    cout<<ans<<"\n";
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