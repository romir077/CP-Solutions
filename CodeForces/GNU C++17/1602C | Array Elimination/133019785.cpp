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
 
// void printDivisors(int n)
// {
//     for (int i=1; i<=sqrt(n); i++)
//     {
//         if (n%i == 0)
//         {
//             if (n/i == i)
//                 cout <<" "<< i;
 
//             else 
//                 cout << " "<< i << " " << n/i;
//         }
//     }
// }
 
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout<<i<<" ";
}
 
void solve(){
    din V a(n);
    take(a,n);
    V b(32,0);
    if(count(all(a),0)==n){
        repin cout<<i+1<<" ";
        cout<<"\n";
        return;
    }
    rep(i,0,32){
        int x=0;
        rep(i,0,n){
            if(a[i]%2==1)x++;
            a[i]/=2;
        }
        b[i]=x;
    }
    int y=b[0];
    rep(i,1,32){
        y=__gcd(y,b[i]);
    }
    // cout<<y<<" "; 
    printDivisors(y);
    cout<<"\n";
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