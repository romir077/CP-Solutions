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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dia dib
    sin string r; cin>>r;
    V x(b),y(b);
    int i=0,j=0;
    while(i<a && j<b){
        if(s[i]==r[j]){x[j]=i;i++,j++;}
        else i++;
    }
    i=a-1,j=b-1;
    while(i>=0 && j>=0){
        if(s[i]==r[j]){y[j]=i;j--,i--;}
        else i--;
    }
    int ans=0;
    rep(i,0,b-1) ans=max(ans,y[i+1]-x[i]);
    cout<<ans<<"\n";
    return 0;
}