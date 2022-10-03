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
    priority_queue<int,vector<int>,greater<int>>q;
    set<int>s;
    din di(p)
    V a(n);
    take(a,n);
    sort(all(a));
    // int ans=0;
    repin{
        s.insert(a[i]);
    }
    for(auto i:a){
        // cout<<w<<flush; 
        // cout<<i<<" ";
        int h=i ; 
        while(h>=1){
            if(h%2==1){
                h=(h-1)/2; 
            }
            else if(h%4==0){
                h/=4;  
            }
            else{
                break ; 
            }
            if(s.count(h)){
                s.erase(s.find(i));
                break;
            }
        }
    }
    // for(auto i:s)cout<<i<<" ";
    // cout<<endl;
    vector<int> dp(300005,0);
    vector<int> f(300005,0);
    f[0]=0;
    f[1]=1;
    rep(i,2,300005){
        f[i]=(f[i-2]+f[i-1])%MOD;
    }
    dp[0]=0;
    rep(i,1,300005){
        dp[i]=(dp[i-1]+f[i])%MOD;
    }
    int ans=0;
    for(auto i:s){
        int x=log2(i)+1;
        if(p-x+1<=0)continue;
        else ans=(ans+dp[p-x+1])%MOD;
    }
    cout<<ans<<"\n";
    // give(dp,200);
    // for(auto i:s){
    //     cout<<i<<' ';
    // }
    // rep(i,0,n){
    //     int x=a[i];
    //     q.push(a[i]);
    //     while(q.top()<=a.back()){
    //         int y=q.top();
    //         q.pop();
    //     }
    // }
    // s.insert(4);
    // q.push(4);
    // while(q.top()!=1024){
    //     int x=q.top();
    //     q.pop();
    //     s.insert(2*x+1);
    //     s.insert(4*x);
    //     q.push(2*x+1);
    //     q.push(4*x);
    // }
    // // for(auto i:s){
    // //     cout<<i<<" ";
    // // }
    // int x=1;
    // V b;
    // for(auto i:s)b.push_back(i);
    // // give(b,b.size());
    // rep(i,0,10){
    //     cout<<lower_bound(all(b),x)-upper_bound(all(b),0)<<" ";
    //     x*=2;
    // }
    
    return 0;
}