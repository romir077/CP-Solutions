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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    din di(q)
    V a(n),b(q);
    vector <int> arr(50,0);
    rep(i,0,n){
        cin>>a[i];
        if(arr[a[i]-1]==0) arr[a[i]-1]=i+1;
    }
    V crr;
    rep(i,0,q){
        cin>>b[i];
        crr.push_back(arr[b[i]-1]);
        rep(j,0,50){
            if(arr[j]==0) continue;
            if(arr[j]<arr[b[i]-1]) arr[j]++;
            // arr[b[i]-1]=1;
        }
        arr[b[i]-1]=1;
    }
    rep(i,0,crr.size()) cout<<crr[i]<<" ";
    return 0;
}