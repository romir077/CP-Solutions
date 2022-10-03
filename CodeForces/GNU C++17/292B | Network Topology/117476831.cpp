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
    V z(n+1,0);
    vpii arr(a);
    rep(i,0,a){
        cin>>arr[i].first>>arr[i].second;
        z[arr[i].first]++;
        z[arr[i].second]++;
    }
    if(count(all(z),n-1)==1 && count(all(z),1)==n-1) {cout<<"star topology\n";return 0;}
    if(count(all(z),2)==n) {cout<<"ring topology\n";return 0;}
    if(count(all(z),2)==n-2 && count(all(z),1)==2) {cout<<"bus topology\n";return 0;}
    cout<<"unknown topology\n";
    return 0;
}