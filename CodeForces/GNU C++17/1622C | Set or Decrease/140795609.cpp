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
 
void solve(){
    din di(k)
    V a(n);
    take(a,n);
    sort(all(a));
    int sum=0;
    V pre(n+1,0);
    repin{
        sum+=a[i];
        pre[i+1]=pre[i]+a[i];
    }
    V b(n-1);
    rep(i,0,n-1){
        b[i]=a[n-i-1]-a[0];
    }
    // give(b,n-1);
    V pre2(n,0);
    rep(i,0,n-1){
        pre2[i+1]=pre2[i]+b[i];
    }
    // cout<<endl<<sum<<"\n";
    // give(pre2,n);
    if(sum<=k){cout<<0<<"\n";return;}
    if(n==1){
        cout<<a[0]-k<<"\n";
        return;
    }
    sum=sum-k;
    int ans=LONG_LONG_MAX;
    rep(i,0,n-1){
        int h=i+1;
        // cout<<h<<" "<<sum-pre2[i+1]<<" ";
        if(sum-pre2[i+1]>=0)h+=ceil((double)(sum-pre2[i+1])/(double)(i+2));
        // cout<<h<<"  ";
        ans=min(ans,h);
    }
    ans=min(ans,sum);
    // cout<<endl;
    cout<<ans<<"\n";
 
}
 
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}