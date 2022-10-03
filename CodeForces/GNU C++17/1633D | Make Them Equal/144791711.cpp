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
 
int dp[(int)1e6+7];
V b(1001),c(1001);
int knapSack(int W, V e, V c, int n){
    if(W>13*n)W=13*n;
    memset(dp, 0, sizeof(dp));
    // dp[0]=0;
    for (int i = 1; i < n + 1; i++){
        for (int w = W; w >= 0; w--){
            if (e[i - 1] <= w)
                dp[w] = max(dp[w],dp[w - e[i - 1]] + c[i - 1]);
        }
    }
    return dp[W];   
}
 
V d(1005,INT_MAX);
void solve1(){
    d[0]=0;d[1]=0;d[2]=1;
    int x=4,y=2;
    while(x<1005){
        d[x]=y;
        x*=2;
        y++;
    }
    for(int i=2;i<=1004;i++){
        int x=1;
        while(x<=i){
            if(i+i/x<=1004)d[i+i/x]=min(d[i+i/x],d[i]+1);
            x++;
        }
    }
}
 
void solve(){
    din di(k)
    take(b,n);
    take(c,n);
    // V d(n);
    // repin{
    //     d[i]=ceil(log2(b[i]));
    // }
    V e;
    repin{
        e.push_back(d[b[i]]);
    }
    cout<<knapSack(k,e,c,n)<<"\n";
    // give(d,n);
    // cout<<"\n";
 
}
 
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve1();
    di(t)
    while(t--){
        solve();
    }
    return 0;
}