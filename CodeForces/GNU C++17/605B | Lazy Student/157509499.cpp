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
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(m)
    vector<pair<int,pair<int,int>>>a(m);
    rep(i,0,m){
        dix diy
        a[i].first=x;
        a[i].second={-1*y,i};
    }
    sort(all(a));
    vector<pair<int,int>>ans(m);
    queue<pair<int,int>>q;
    int p=0;
    int cu=1;
    rep(i,0,m){
        if(a[i].second.first==0){
            if(q.empty()){cout<<"-1\n";return 0;}
            ans[a[i].second.second]=q.front();
            q.pop();
        }
        else{
            ans[a[i].second.second]={cu,cu+1};cu++;
            rep(j,1,cu-2+1){
                p++;
                q.push({j,cu});
                if(p>=m-(n-1))break;
            }
        }
    }
    rep(i,0,m){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
   
    return 0;
}