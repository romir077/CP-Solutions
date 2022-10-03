#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
 
#define dix di(x)
#define diy di(y)
#define diz di(z)
 
#define din di(n)
 
#define V vector<int>
 
#define all(x) x.begin(),x.end()
 
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(k) dix
    V a(n);
    repin cin>>a[i];
    sort(all(a));
    V b;
    rep(i,1,n){
        if(a[i]-a[i-1]>x) b.push_back(a[i]-a[i-1]); 
    }
    sort(all(b));
    int tot=b.size()+1;
    rep(i,0,b.size()){
        if(b[i]%x==0) k-=(b[i]/x-1);
        else k-=(b[i]/x);
        if(k>=0) tot--;
        else break;
    }
    cout<<tot<<"\n";
    return 0;
}