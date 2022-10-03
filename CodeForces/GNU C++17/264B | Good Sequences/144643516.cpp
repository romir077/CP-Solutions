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
V dp1((int)1e5+5,INT_MIN);
V dp2((int)1e5+5,-1);
 
void func(int i, int k, vector<int>&a){
    set<int>s;
    while (k % 2 == 0){
        s.insert(2);
        k/=2;
        // dp2[2]=i;
    }
    for (int i = 3; i*i <= (k); i = i + 2){
        while (k % i == 0){
            // dp1[i]=0;
            s.insert(i);
            k = k/i;
        }
    }
    if(k>2){
        s.insert(k);
    }
    for(auto p:s){
        dp1[i+1]=max(dp1[i+1],dp1[dp2[p]+1]+1);
        dp2[p]=i;
        // cout<<p<<" ";
    }
    // give(dp2,8);
    // cout<<endl;
    // give(dp1,11);
    // cout<<endl;
    // cout<<endl;
 
    s.clear();
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din V a(n);
    take(a,n);
    dp1[0]=0;dp1[1]=1;
    int k=a[0];
    set<int>s;
    while (k % 2 == 0){
        s.insert(2);
        k/=2;
    }
    for (int i = 3; i*i <= (k); i = i + 2){
        while (k % i == 0){
            s.insert(i);
            k = k/i;
        }
    }
    if(k>2){
        s.insert(k);
    }
    for(auto p:s){
        dp2[p]=0;
    }
    // for(auto i:s){
    //     cout<<i<<" ";
    // }
    // give(dp2,8);
    // cout<<endl;
    // give(dp1,11);
    // cout<<endl;
    s.clear();
    // cout<<endl;
 
    rep(i,1,n){
        func(i,a[i],a);
    }
    int ans=INT_MIN;
    rep(i,0,n+1){
        if(dp1[i]>ans)ans=dp1[i];
    }
    // give(dp1,n+1);
    cout<<ans<<"\n";
 
    return 0;
}