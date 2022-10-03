#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    din
    int arr[n][5];
    repin{
        rep(j,0,5) cin>>arr[i][j];
    }
 
    int x=0;
    rep(i,1,n){
        int up=0,down=0;
        rep(j,0,5){
            if(arr[i][j]>arr[x][j]) up++;
            else down++;
        }
        if(up<down) x=i;
        // else x=i;
    }
    repin{
        if(i==x) continue;
        int up=0,down=0;
        rep(j,0,5){
            if(arr[i][j]>arr[x][j]) up++;
            else down++;
        }
        if(up<down) {cout<<"-1\n";return;}
    }
    cout<<x+1<<"\n";
    // vpii brr(n);
    // repin {brr[i].first=0;brr[i].second=i+1;}
    // rep(j,0,5){
    //     int x=-1,mini=INT_MAX;
    //     repin{
    //         if(arr[i][j]<mini){mini=arr[i][j];x=i;}
    //     }
    //     brr[x].first++;
    // }
    // sort(all(brr),greater<pair<int,int>>());
    // if(n==1) cout<<1<<"\n";
    // else{
    //     if(brr[0].first==brr[1].first) cout<<"-1\n";
    //     else cout<<brr[0].second<<"\n";
    // }
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