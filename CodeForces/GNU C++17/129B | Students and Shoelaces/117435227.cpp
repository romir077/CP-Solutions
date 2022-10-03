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
    din dia
    vpii arr(a);
    V z(n+1,0);
    rep(i,0,a){
        cin>>arr[i].first;
        cin>>arr[i].second;
        z[arr[i].first]++;
        z[arr[i].second]++;
    }
    int step=0;
    while(count(all(z),1)!=0){
        step++;
        z=V(n+1,0);
        // z[n+1,0];
        rep(i,0,a){
            z[arr[i].first]++;
            z[arr[i].second]++;
        }
        rep(i,0,a){
            if(z[arr[i].first]==1 || z[arr[i].second]==1) {arr[i].first=0;arr[i].second=0;}
        }
        z=V(n+1,0);
        // z[n+1,0];
        rep(i,0,a){
            z[arr[i].first]++;
            z[arr[i].second]++;
        }
    }
    cout<<step<<"\n";
    
    return 0;
}