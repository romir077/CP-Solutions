    #include<bits/stdc++.h>
    #define ll long long
    #define rep(i,a,b) for(int i=a;i<b;i++)
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
    #define vpii vector<pair<int,int>>
    #define all(x) x.begin(),x.end()
    #define sis string s;
    #define sin string s;cin>>s;
    using namespace std;
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0)return false;
    }
    return true;
}
 
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din
    V a(n);
    repin cin>>a[i];
    rep(i,0,n){
        int x=sqrt(a[i]);
        if(isPrime(x) && x*x==a[i]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}