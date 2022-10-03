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
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    din
    V a(n);
    repin cin>>a[i];
    V b;
    set<int>s;
    int x=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>x){x=a[i];s.insert(i);}
    }
    for(auto it:s){
        b.push_back(it);
    }
    // rep(i,0,b.size()) cout<<b[i]<<" ";
    // int x=b.size();
    reverse(all(b));
    rep(i,0,n-b[0]){
        cout<<a[b[0]+i]<<" ";
    }
    rep(i,0,b.size()-1){
        rep(j,0,b[i]-b[i+1]){
            cout<<a[b[i+1]+j]<<' ';
        }
    }
    cout<<"\n";
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