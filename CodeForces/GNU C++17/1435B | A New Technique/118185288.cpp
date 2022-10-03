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
 
 
void solve(){
    din di(m)
    int x=0,flag=0;
    int arr[n][m],brr[m][n];
    rep(i,0,n){
        rep(j,0,m) cin>>arr[i][j];
    }
    rep(i,0,m){
        rep(j,0,n) {
            cin>>brr[i][j];
            if(arr[0][0]==brr[i][j] && flag==0) {flag=1;x=i;}
        }
    }
    rep(i,0,n){
        rep(j,0,n){
            if(brr[x][i]==arr[j][0]){
                rep(k,0,m){
                    cout<<arr[j][k]<<" ";
                }
                cout<<"\n";
                break;
            }
        }
    }
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