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
 
bool good(V a, int x, string s, string r, int n){
    V b(n+1,1);
    rep(i,0,x){
        b[a[i]]=0;
    }
    string f="";
    repin{
        if(b[i+1]==1)f+=s[i];
    }
    // bool ans=true;
    int i=0,j=0;
    while(i<f.length() && j<r.length()){
        if(f[i]==r[j]){j++;i++;}
        else i++;
    }
    if(j==r.length())return true;
    else return false;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sin
    string r;cin>>r;
    int n=s.length();
    V a(n);
    take(a,n);
    int ans=0;
    if(s==r || !good(a,1,s,r,n)){cout<<ans<<"\n";return 0;}
    ans=1;
    while(good(a,ans,s,r,n)){
        ans*=2;
        if(ans>=n){ans=n;break;}
    }
    int l=1,d=ans;
    while(l<d){
        int mid=(l+d)/2;
        if(good(a,mid,s,r,n)){
            ans=l;
            l=mid+1;
        }
        else{
            d=mid;
        }
    }
    if(l==d && good(a,l,s,r,n))ans=l;
    while(good(a,ans+1,s,r,n))ans++;
    cout<<ans<<"\n";
 
    return 0;
}