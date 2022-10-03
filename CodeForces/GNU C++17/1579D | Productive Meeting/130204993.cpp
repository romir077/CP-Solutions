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
 
void solve(){
    din 
    set<pair<int,int>,greater<pair<int,int>>>s;
    repin{
        dix
        if(x!=0)s.insert({x,i+1});
    }
    V b;
    while(s.size()>=2){
        vpii c;
        auto i=s.begin();
        b.push_back(i->second);
        c.push_back({i->first,i->second});
        s.erase(i);
        i=s.begin();
        b.push_back(i->second);
        c.push_back({i->first,i->second});
        s.erase(i);
        
        c[0].first--;
        c[1].first--;
        if(c[0].first>0)s.insert(c[0]);
        if(c[1].first>0)s.insert(c[1]);
        c.clear();
    }
    cout<<b.size()/2<<"\n";
    rep(i,0,b.size()){
        cout<<b[i]<<" "<<b[i+1]<<"\n";
        i++;
    }
 
    
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