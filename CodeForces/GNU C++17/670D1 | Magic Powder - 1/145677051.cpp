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
 
bool is_possible(int m, int k, vector<int>a, vector<int>b, int n) {
    for(int i=0;i<n;i++) {
        if(a[i]*m-b[i]>0) {
 
            k-=a[i]*m-b[i];
            if(k<0)return false;
        }
 
    }
    return k>=0;
 
}
 
signed main()
{
    din    
    di(k)
    V a(n),b(n);
    take(a,n);
    take(b,n);
    int l=0,r=2*(int)1e9;
    int ans=0;
    // cout<<h;
    while (r>=l)
    {
        int mid = (l+r)/2;
        if(is_possible(mid,k,a,b,n)) {
            ans=mid;
            l = mid+1;;
        }
        else r = mid-1;
        
    }
    
    cout << ans ;
}