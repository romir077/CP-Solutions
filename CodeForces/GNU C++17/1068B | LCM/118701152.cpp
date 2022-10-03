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
    for (int i = 2; i <= ceil(sqrt(n)); i++)
        if (n % i == 0)
            return false;
  
    return true;
}
 
int factorize(long long n) 
{ 
    int count = 0; 
  
    int tot=1;
    while (!(n % 2)) { 
        n >>= 1; // equivalent to n=n/2; 
        count++; 
    }  
    if(count>0) tot*=(count+1);
 
    for (long long i = 3; i <= n; i += 2) { 
        count=0;
        if(i>sqrt(n)) {tot*=2;break;}
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if(count>0) tot*=(count+1);
    } 
    return tot;
} 
 
signed main()
{
    din
    int x=n;
    int cnt=0,tot=1;
    if(n==1 || n==2) {cout<<n<<"\n";return 0;}
    if(isPrime(n)) {cout<<2<<"\n";return 0;}
    // V div;
    // // rep(i,2,n+1){
    // //     if(isPrime(n))
    // //     if(n%i==0){
    // //         div.push_back(i);
    // //         while(n%i==0){n/=i;}
    // //     }
    // // } 
    // rep(i,2,x+1){
    //     if(isPrime(x)) {tot*=2;break;}
    //     if(x%i==0) while(x%i==0) {cout<<x<<" ";cnt++;x/=i;}
    //     tot*=(cnt+1);
    //     cnt=0;
    //     if(x==1) break;
    // }
    cout<<factorize(n)<<"\n";
    return 0;
}