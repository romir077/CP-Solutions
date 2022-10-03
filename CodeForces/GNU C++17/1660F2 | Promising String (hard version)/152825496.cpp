#include<bits/stdc++.h>
// #define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define repin rep(i,0,n)
// #define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define precise(i) cout<<fixed<<setprecision(i)
// #define V vector<int>
#define take(a,n) for(int j=0;j<n;j++) cin>>a[j];
#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
// #define sis string s;
// #define sin string s;cin>>s;
#define db double
#define MOD 1000000007
#define el cout<<endl;
 
#include <bits/stdtr1c++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
/*** Needs C++11 or C++14 ***/
 
/// Treap supporting duplicating values in set
/// Maximum value of treap * ADD must fit in long long
 
struct Treap{ /// hash = 96814
    int len;
    const int ADD = 1000010;
    const int MAXVAL = 1000000010;
    tr1::unordered_map <long long, int> mp; /// Change to int if only int in treap
    tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> T;
 
    Treap(){
        len = 0;
        T.clear(), mp.clear();
    }
 
    inline void clear(){
        len = 0;
        T.clear(), mp.clear();
    }
 
    inline void insert(long long x){
        len++, x += MAXVAL;
        int c = mp[x]++;
        T.insert((x * ADD) + c);
    }
 
    inline void erase(long long x){
        x += MAXVAL;
        int c = mp[x];
        if (c){
            c--, mp[x]--, len--;
            T.erase((x * ADD) + c);
        }
    }
 
    /// 1-based index, returns the K'th element in the treap, -1 if none exists
    inline long long kth(int k){
        if (k < 1 || k > len) return -1;
        auto it = T.find_by_order(--k);
        return ((*it) / ADD) - MAXVAL;
    }
 
    /// Count of value < x in treap
    inline int count(long long x){
        x += MAXVAL;
        int c = mp[--x];
        return (T.order_of_key((x * ADD) + c));
    }
 
    /// Number of elements in treap
    inline int size(){
        return len;
    }
};
 
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    Treap a,b,c;
    a.insert(0);
    long long ans=0;
    long long x=0,y=0;
    long long pre[n]={};
    repin{
        if(s[i]=='+')x++;
        else y++;
        pre[i]=y-x;
        if(((pre[i]%3)+3)%3==0)a.insert(pre[i]);
        if(((pre[i]%3)+3)%3==1)b.insert(pre[i]);
        if(((pre[i]%3)+3)%3==2)c.insert(pre[i]);
    }
    rrep(i,n-1,0){
        if(((pre[i]%3)+3)%3==0){
            a.erase(pre[i]);
            ans+=a.count(pre[i]+1);
        }
        if(((pre[i]%3)+3)%3==1){
            b.erase(pre[i]);
            ans+=b.count(pre[i]+1);
        }
        if(((pre[i]%3)+3)%3==2){
            c.erase(pre[i]);
            ans+=c.count(pre[i]+1);
        }
    }
    cout<<ans<<"\n";
    
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