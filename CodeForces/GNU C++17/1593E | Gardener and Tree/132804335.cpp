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
 
map<int,set<int>> tree;
 
void solve(){
    din di(k)
    rep(i,0,n-1){
        dix diy
        tree[x].insert(y);
        tree[y].insert(x);
    }
    V q;
    if(n==1 || n==2){cout<<"0\n";tree.clear();return;}
    for(auto it:tree){
        if(it.second.size()==1)q.push_back(it.first);
    }
    int del=0;
    rep(i,0,k){
        V l;
        if(n-del==1 || n-del==2){cout<<"0\n";tree.clear();return;}
        for(auto it:q){
            int x=*tree[it].begin();
            tree[x].erase(it);
            if(tree[x].size()==1){
                l.push_back(x);
            }
            del++;
        }
        q.clear();
        q=l;
        if(q.empty() || del==n){cout<<"0\n";tree.clear();return;}
        l.clear();
    }
    cout<<n-del<<"\n";
    tree.clear();
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