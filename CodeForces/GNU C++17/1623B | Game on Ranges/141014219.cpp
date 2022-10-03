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
 
bool sortbysec(const pair<int,int> &a, const pair<int,int>&b){
    if(a.first==b.first) return (a.second<b.second);
    // else{
    //     if(a.second>b.second) return(a.second<b.second);
    // }
}
 
void solve(){
    din
    set<pair<int,int>>st;
    vpii a(n);
    repin{
        dix diy
        a[i].first=x;
        a[i].second=y;
        st.insert({x,y});
    }
    // sort(all(a));
    // sort(all(a),sortbysec);
    // repin{
    //     cout<<a[i].first<<" "<<a[i].second<<"\n";
    // }
    rep(i,0,n){
        if(a[i].first==a[i].second){{cout<<a[i].first<<" "<<a[i].second<<" "<<a[i].first<<endl;continue;}}
        rep(j,a[i].first,a[i].second+1){
            if(j==a[i].first && st.count({a[i].first+1,a[i].second})==1){cout<<a[i].first<<" "<<a[i].second<<" "<<j;break;}
            if(j==a[i].second && st.count({a[i].first,a[i].second-1})==1){cout<<a[i].first<<" "<<a[i].second<<" "<<j;break;}
            if(st.count({a[i].first,j-1})==1 && st.count({j+1,a[i].second})==1){cout<<a[i].first<<" "<<a[i].second<<" "<<j;break;}
        }
        cout<<"\n";
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