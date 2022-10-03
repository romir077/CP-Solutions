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
 
signed main()
{
    din di(k)
    V a(k);
    int j=1;
    rep(i,0,k) cin>>a[i];
    rep(i,0,k){
        cout<<a[i]<<" ";
        int cnt=0;
        while(cnt<=n-2){
            int flag=1;
            rep(l,0,k){
                if(a[l]==j) {flag=0;break;}
            }
            j++;
            if(flag==0) continue;
            else {cnt++;cout<<j-1<<" ";}
        }
        cout<<"\n";
    }
    return 0;
}