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
#define MOD 1000000007
#define el cout<<endl;
using namespace std;
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
void solve(){
    din
    map<int,V>tree;
    rep(i,0,n-1){
        dix
        tree[x].push_back(i+2);
    }
    int x=tree.size();
    V b;
    for(auto i:tree){
        b.push_back(i.second.size());
    }
    sort(all(b),greater<int>());
    int ans=0;
    rep(i,0,b.size()){
        b[i]-=x-i+1;
        if(b[i]<0)b[i]=0;
    }
    ans+=b.size()+1;
    V c;
    multiset<int,greater<int>> d,e;
    for(auto i:b){
        if (i!=0)c.push_back(i);
    }
    sort(all(c),greater<int>());
    if(c.size()>0)d.insert(c[0]);
    if(c.size()>1)d.insert(c[1]);
    // if(c.size()>0)e.insert(c[0]);
    // if(c.size()>1)e.insert(c[1]);
    // for(auto i:d)cout<<i<<" ";
    while(d.size()>0 ){
        auto it=d.begin();
        e.clear();
        ans++;
        if(*it>2){
            e.insert(*it-2);
        }
        d.erase(it);
        for(auto i:d){
            if(i!=1)e.insert(i-1);
        }
        d.clear();
        d=e;
    }
    cout<<ans<<"\n";
    // int temp=0;
    // if(c.size()==0){
 
    // }
    // else if(c.size()==1){
    //     ans+=(c[0]+1)/2;
    // }
    // else{
    //     if(c[0]%2==0){
    //         int x=c[0]/2;
    //         if(c[1]-x>0){
    //             ans+=x;
    //             ans+=(c[1]-x+1)/2;
    //         }
    //         else ans+=x;
    //     }
    //     else{
    //         int x=c[0]/2+1;
    //         if(c[1]-x-1>0){
    //             ans+=x;
    //             ans+=(c[1]-x)/2;
    //         }
    //         else ans+=x;
    //     }
    // }
    // cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}