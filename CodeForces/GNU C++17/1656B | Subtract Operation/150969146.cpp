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
 
bool findPair(vector<int>arr, int size, int n)
{
    // Initialize positions of two elements
    int i = 0;
    int j = 1;
 
    // Search for a pair
    while (i < size && j < size)
    {
        if (i != j && (arr[j] - arr[i] == n || arr[i] - arr[j] == n) )
        {
            // cout << "Pair Found: (" << arr[i] <<
            //             ", " << arr[j] << ")";
            return true;
        }
        else if (arr[j]-arr[i] < n)
            j++;
        else
            i++;
    }
 
    // cout << "No such pair";
    return false;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
void solve(){
    din di(k)
    V a(n);
    take(a,n);
    sort(all(a));
    int i=0,j=n-1;
    if(n==1){
        if(a[0]==k){cout<<"YES\n";return;}
        else {cout<<"NO\n";return;}
    }
    if(findPair(a,n,k)){cout<<"YES\n";return;}
    else cout<<"NO\n";return;
    cout<<"NO\n";
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