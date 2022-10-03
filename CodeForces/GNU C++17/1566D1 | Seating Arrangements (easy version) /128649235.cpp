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
#define take(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define give(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' ';
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
 
bool sortbysec( pair<int,int> &a,pair<int,int> &b){
    if(a.first==b.first){
        if(a.second>b.second){
            return true;
        }
        else{
            return false;
        }
    }
    return (a.first < b.first);
}
 
void solve(){
    din di(m)
    map<int,int>mp;
    vpii a(m);
    rep(i,0,m){cin>>a[i].first;a[i].second=i+1;}
    vpii b=a;
    sort(all(a),sortbysec);
 
    rep(i,0,m){
        mp[a[i].second]=i+1;
    }
    V c(m,0);
    int cost=0;
    for(auto itr:mp){
        rep(i,0,itr.second-1){
            if(c[i]!=0)cost++;
        }
        c[itr.second-1]++;
    }
    cout<<cost<<"\n";
    // rep(i,0,m)cout<<b[i].first<<" ";
    // cout<<endl;
    // rep(i,0,m)cout<<b[i].second<<" ";
    // cout<<endl;
    
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