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
    V a(n);
    int sum=0;
    repin {cin>>a[i];sum+=a[i];}
    if(k==1){cout<<"Yes\n"<<n;return 0;}
    if(sum%k!=0) {cout<<"No\n";return 0;}
    else{
        int x=sum/k,y=0,cnt=0;
        V b;
        rep(i,0,n){
            y+=a[i];cnt++;
            if(y==x) {b.push_back(cnt);y=0;cnt=0;}
            if(y>x) {cout<<"No\n";return 0;}
        }
        cout<<"Yes\n";
        rep(i,0,b.size()) cout<<b[i]<<" ";
    }
    return 0;
}