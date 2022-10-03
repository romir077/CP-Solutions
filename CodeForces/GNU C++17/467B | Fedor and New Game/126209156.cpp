#include<stdio.h>
// #define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
// #define int long long
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
// using namespace std;
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int n;scanf("%d",&n); int m;scanf("%d",&m); int k;scanf("%d",&k);
    int a[m+1];
    rep(i,0,m+1) scanf("%d",&a[i]);
    int tot=0;
    rep(i,0,m) if(__builtin_popcount(a[i]^a[m])<=k){tot=tot+1;}
    printf("%d",tot);
    return 0;
}