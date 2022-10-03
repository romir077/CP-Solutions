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
    dia dib di(k)
    int cnt=0;
    if(k==1){
        if(a!=b && max(a,b)%min(a,b)==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        while(a%2==0){
            cnt++;
            a=a/2;
        }
        for (int i=3;i<=sqrt(a);i=i+2){
            while (a%i == 0){
                cnt++;
                a=a/i;
            }
        }
        if (a>2) cnt++;
        while(b%2==0){
            cnt++;
            b=b/2;
        }
        for (int i=3;i<=sqrt(b);i=i+2){
            while (b%i == 0){
                cnt++;
                b=b/i;
            }
        }
        if (b>2) cnt++;
        if(cnt>=k) cout<<"YES\n";
        else cout<<"NO\n";
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