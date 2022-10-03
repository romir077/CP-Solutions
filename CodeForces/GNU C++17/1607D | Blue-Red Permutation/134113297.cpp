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
    V a(n);
    take(a,n);
    sin
    V r,b;
    repin{
        if(s[i]=='R')r.push_back(a[i]);
        else b.push_back(a[i]);
    }
    bool x=true;
    sort(all(r));
    sort(all(b));
    if(r.size()>0){
        if(r.back()>n){x=false;cout<<"NO\n";return;}
    }
    if(b.size()>0){
        if(b[0]<=0){x=false;cout<<"NO\n";return;}
    }
    // set<int>p;
    // repin p.insert(a[i]);
    // if(r.size()==0 || b.size()==0){
    //     if(p.size()!=n){x=false;cout<<"NO\n";return;}
    // }
    // // give(b,b.size());
    // // cout<<endl;
    // // give(r,r.size());
    if(r.size()>0){
        rrep(i,n-1,n-1-(r.size()-1)){
            if(r[i-n+r.size()]>i+1){x=false;cout<<"NO\n";return;}
        }   
    }
    rep(i,0,b.size()){
        if(i+1>b[i]){x=false;cout<<"NO\n";return;}
    }
 
 
    if(x)cout<<"YES\n";
    else cout<<"NO\n";
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