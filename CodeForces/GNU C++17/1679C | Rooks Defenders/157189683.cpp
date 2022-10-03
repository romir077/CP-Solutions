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
 
// int n; // array size
 
// Max size of tree
V tree(2*100005,0),tree2(2*100005,0);
 
// function to build the tree
void build( vector<int> arr,V b,int n)
{
    // insert leaf nodes in tree
    for (int i=0; i<n; i++){   
        tree[n+i] = arr[i];
        tree2[n+i] = b[i];
    }
     
    // build the tree by calculating parents
    for (int i = n - 1; i > 0; --i){    
        tree[i] = tree[i<<1] + tree[i<<1 | 1];   
        tree2[i] = tree2[i<<1] + tree2[i<<1 | 1];   
    }
}
 
// function to update a tree node
void updateTreeNode1(int p, int value,int n)
{
    // set value at position p
    tree[p+n] = value;
    p = p+n;
     
    // move upward and update parents
    for (int i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] + tree[i^1];
}
void updateTreeNode2(int p, int value,int n)
{
    // set value at position p
    tree2[p+n] = value;
    p = p+n;
     
    // move upward and update parents
    for (int i=p; i > 1; i >>= 1)
        tree2[i>>1] = tree2[i] + tree2[i^1];
}
 
// function to get sum on interval [l, r)
int query1(int l, int r,int n)
{
    int res = 0;
     
    // loop to find the sum in the range
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += tree[l++];
     
        if (r&1)
            res += tree[--r];
    }
     
    return res;
}
int query2(int l, int r,int n)
{
    int res = 0;
     
    // loop to find the sum in the range
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += tree2[l++];
     
        if (r&1)
            res += tree2[--r];
    }
     
    return res;
}
 
void solve(){
    int n;cin>>n; di(q)
    map<int,int>mpx;
    map<int,int>mpy;
    vector<int>x(n,0),y(n,0);
    // cout<<"adcdc";
    build(x,y,n);
    rep(i,0,q){
        di(w)
        if(w==1){
            dia dib
            mpx[a]++;
            mpy[b]++;
            if(mpx[a]>0)updateTreeNode1(a-1,1,n);
            if(mpy[b]>0)updateTreeNode2(b-1,1,n);
            // give(tree,9);cout<<"\n";
            // give(tree2,9);cout<<"\n";
        }
        else if(w==2){
            dia dib
            mpx[a]--;
            mpy[b]--;
            if(mpx[a]==0)updateTreeNode1(a-1,0,n);
            if(mpy[b]==0)updateTreeNode2(b-1,0,n);
        }
        else{
            di(x1) di(y1) di(x2) di(y2)
            bool ans1=false,ans2=false;
            if(query1(x1-1,x2,n)==x2-x1+1)ans1=true;
            if(query2(y1-1,y2,n)==y2-y1+1)ans2=true;
            if(ans1 || ans2)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}