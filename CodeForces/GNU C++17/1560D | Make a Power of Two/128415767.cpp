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
 
vector<string>arr(63);
 
void solve(){
    sin
    int n=s.length();
    int ans=INT_MAX;
    int z=-1;
    rep(i,0,63){
        int b=0;
        int j=0,k=0;
        while(j<arr[i].length() && k<s.length()){
            if(arr[i][j]==s[k]){j++,k++;}
            else {k++;b++;}
            // cout<<b<<" ";
        }
        b += (arr[i].length()-j+s.length()-k);
        if(b<ans){z=i;}
        ans=min(ans,b);
    }
    cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a=1;
    rep(i,0,63){
        arr[i]=to_string(1LL<<i);
        
    }
 
    // rep(i,0,63)cout<<arr[i]<<" ";
    di(t)
    while(t--){
        solve();
    }
    return 0;
}