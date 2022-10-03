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
    din V a(n);
    take(a,n);
    di(q)
    map<int,int>mp;
    repin{
        mp[a[i]]++;
    }
    // rep(i,0,q){dix diy}
    // for(auto i:mp)cout<<i.first<<" "<<i.second<<"\n";
    vector<vector<int>>l;
    l.push_back(a);
 
    while(1){
        vector<int>b=a;
        repin{
            a[i]=mp[a[i]];
        }
 
        l.push_back(a);
        mp.clear();
        repin{
            mp[a[i]]++;
        }
        if(b==a)break;
    }
    rep(i,0,q){
        dix diy
        if(y>l.size()-1){
            cout<<l[l.size()-1][x-1]<<"\n";
        }
        else cout<<l[y][x-1]<<"\n";
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