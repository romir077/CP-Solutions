#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repin rep(i,0,n)
#define int long long
#define di(a) int a;cin>>a;
#define dip di(n)
using namespace std;
 
void solve(){
    int kick;
    cin>>kick;
    dip di(m)
    vector<int> a(n),b(m);
    int tot=0;
    int maxi=INT_MIN;
    repin {
        cin>>a[i];
    }
    rep(i,0,m) {
        cin>>b[i];
    }
    int j=0,o=0;
    vector<int> q;
    rep(i,0,n+m){
        int flag=0;
        if(a[j]==0 && j<n) {q.push_back(a[j]);
            j=j+1;
            tot++;
            continue;
        }
        if(b[o]==0 && o<m) {
            q.push_back(b[o]);
            o=o+1;
            tot++;
            continue;
        }
        if(a[j]<=kick+tot && j<n) {
            q.push_back(a[j]);
            j=j+1;
            continue;
        }
        if(b[o]<=kick+tot && o<m) {
            q.push_back(b[o]);
            o=o+1;
            continue;
        }
        if(flag==0){
            cout<<"-1\n";
            return;
        }
    }
    rep(i,0,m+n-1) cout<<q[i]<<" ";
    cout<<q[m+n-1]<<"\n";
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