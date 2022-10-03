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
 
 
void solve(){
    din di(m)
    vpii arr(n*m);
    rep(i,0,n*m) {cin>>arr[i].first;arr[i].second=i;}
    vpii brr=arr;
    sort(all(arr));
    vector<pair<int,int>> a(m);
    rep(i,0,m) {a[i].first=arr[i].second/m; a[i].second=arr[i].second%m;}
    // sort(all(a));
    rep(i,0,m){
        int x=arr[i].second;
 
        // int temp=brr[m*a[i].first+i].first;
        // brr[m*a[i].first+i].first=brr[x].first;
        // brr[x].first=temp;
 
        swap(brr[m*a[i].first+i],brr[x]);
 
        rep(j,0,m){
            if(m*a[i].first+i==arr[j].second){
                swap(arr[j].second,arr[i].second);
                break;
            }
        }
        // arr[i].second=m*a[i].first+i;
 
    }
    rep(i,0,n){
        rep(j,0,m) cout<<brr[m*i+j].first<<" ";
        cout<<"\n";
    }
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}
 
// 1
// 3 4
// 2 1 3 6 3 1 8 9 6 1 1 8
 
// 1
// 3 4
// 3 1 3 6 3 1 8 9 6 1 2 8 