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
 
 
void solve(){
    din di(l) di(r)
    int p=l,q=r;
    V a(n);
    repin cin>>a[i];
    sort(all(a));
    int cnt=0;
    rep(i,0,n-1){
        l=p,r=q;
        l=l-a[i];
        r=r-a[i];
        if(a[0]>r || a.back()<l){
            continue;
        }
        else{
            V :: iterator lower,upper;
            lower=lower_bound(a.begin()+i+1,a.end(),l);
            int left=lower-a.begin();
            // if(a[left]>l) left--;
            upper=upper_bound(a.begin()+i+1,a.end(),r);
            int right=upper-a.begin();
            // if(a[right>r]) right--;
            // right--;
            cnt+=(right-left);
        }
    }
    cout<<cnt<<"\n";
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