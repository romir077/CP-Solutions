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
 
void solve(){
    din dia dib
    V arr(n+1);
    // take(arr,n);
    repin{
        cin>>arr[i+1];
    }
    arr[0]=0;
    int ans=b*arr[1];
    int curr=0;
    if(a<=b){
        if(n!=1)ans+=abs(arr[1]-arr[curr])*a;
        curr=1;
    }
    else {
        // curr=0;
        // int x=abs(arr[1]-arr[curr])*b;
        int y=(n-1)*abs(arr[1]-arr[curr])*b;
        int z=a*abs(arr[1]-arr[curr]);
        if(z<=y){
            if(n!=1)ans+=z;
            curr++;
        }
    }
    // cout<<curr<<" ";
    if(a<=b){
        rep(i,2,n+1){
            int x=abs(arr[i]-arr[curr])*b;
            ans+=(x);
            int y=abs(arr[i]-arr[curr])*a;
            if(i==n){cout<<ans<<"\n";return;}
            ans+=y;
            curr++;
            // // int y=
            // int temp=curr;
            // rep(j,curr,i){
            //     int y=abs(arr[j]-arr[curr])*a+abs(arr[i]-arr[j])*b;
            //     if(y<=x){
            //         x=y;
            //         temp=j;
            //     }
            // }
            // curr=temp;
            // ans+=x;
            // if()
        }
    }
    else{
        // cout<<ans<<" ";
        rep(i,2,n+1){
            int x=abs(arr[i]-arr[curr])*b;
            int y=(n-i)*abs(arr[i]-arr[curr])*b;
            int z=a*abs(arr[i]-arr[curr]);
            if(z<=y){ans+=z;curr++;}
            ans+=x;
            if(i==n){cout<<ans<<"\n";return;}
            
            // cout<<ans<<" "<<x<<" "<<y<<" "<<z<<" "<<curr<<"\n";
        }
    }
    cout<<ans<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}