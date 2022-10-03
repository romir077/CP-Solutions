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
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(k)
    vector<pair<string,string>> a(k);
    map<string,string> c;
    rep(i,0,k){
        cin>>a[i].first>>a[i].second;
        c[a[i].first]=a[i].second;
        c[a[i].second]=a[i].first;
    }
    vector<string> b(n);
    repin cin>>b[i];
    repin{
        int x=b[i].size(),y=c[b[i]].size();
        if(x>y) b[i]=c[b[i]];
    }
    repin cout<<b[i]<<" ";
    cout<<"\n";
    return 0;
}