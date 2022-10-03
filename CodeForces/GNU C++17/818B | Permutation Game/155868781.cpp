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
    V a(m);
    take(a,m);
    V p(n+1,0);
    rep(i,1,m){
        if(a[i]>a[i-1]){
            if(p[a[i-1]]==0)p[a[i-1]]=a[i]-a[i-1];
            else if(p[a[i-1]]==a[i]-a[i-1]) continue;
            else {cout<<"-1\n";return 0;}
        }
        else{
            if(p[a[i-1]]==0)p[a[i-1]]=n-a[i-1]+a[i];
            else if(p[a[i-1]]==n-a[i-1]+a[i]) continue;
            else {cout<<"-1\n";return 0;}
        }
    }
    set<int>s;
    int tot=0;
    rep(i,1,n+1)if(p[i]!=0){s.insert(p[i]);tot++;}
    if(s.size()==tot){
        // rep(i,1,n+1)cout<<p[i]<<" ";
        // cout<<"\n";
        bool arr[n+1];
        memset(arr,false,n+1);
        for(auto i:s){
            arr[i]=true;
        }
        int i=1,j=1;
        while(j<n){
            while(arr[i]==true){i++;if(i>n)break;}
            if(i>n)break;
            while(p[j]!=0)j++;
            arr[i]=true;
            p[j]=i;
        }
 
        // if(p[n]==0)
        rep(i,1,n+1)cout<<p[i]<<" ";
        cout<<"\n";
    }
    else cout<<"-1\n";
    // cout<<"\n";
    return 0;
}