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
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    din di(k)
    vpii a(n);
    repin {cin>>a[i].first;a[i].second=i+1;}
    vpii b=a;
    sort(all(b));
    repin {b[i].second=i+1;}
    map<int,int>x;
    repin{
        x[b[i].first]=b[i].second;
    }
 
    int cnt=0,y=INT_MIN;
    rep(i,1,n){
        if(x[a[i].first]==x[a[i-1].first]+1) {continue;}
        else{
            cnt++;
        }
    }
    if(k>=cnt+1) cout<<"YES\n";
    else cout<<"NO\n";
    
 
    // V d;
    // int cnt=0,x=INT_MIN;
    // rep(i,0,n){
    //     if(a[i]>=x) {x=a[i];cnt++;}
    //     else{
    //         d.push_back(cnt);cnt=1;x=a[i];
    //     }
    // }
    // d.push_back(cnt);
    // // cout<<d.size()<<" ";
    // if(d.size()<=k) cout<<"YES\n";
    // else cout<<"NO\n";
 
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