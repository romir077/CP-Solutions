 
    #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 1000000007
#define all(v) (v).begin(),(v).end()
#define inv(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define int ll
#define INF LONG_LONG_MAX
#define ini(n) int n;cin>>n;
 
signed main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n=0,k=0;
    cin>>n>>k;
 
    
    
    vector<pair<ll,ll>> adash(n,{0,0});
    for(ll i = 0;i<n;i++){
        cin>>adash[i].ff;
        adash[i].second = i;
    }
 
    sort(all(adash));
    
    cout<<adash[n-k].ff<<enl;
    vll b;
    repg(0,k){
         b.pb(adash[n-1-i].ss+1);
    }
    sort(all(b));
    print(b);
 
}