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
    din dix
    V a(n);
    take(a,n);
    if(x<=n/2)cout<<"YES\n";
    else if(x>=n){
        V b=a;
        sort(all(b));
        if(a==b)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        V b=a;
        sort(all(b));
        int y=x-n/2;
        if(n%2==1){
            int f=1;
            rep(i,n/2-y+1,n/2+y){
                if(b[i]!=a[i])f=0;
            }
            if(f==0)cout<<"NO\n";
            else cout<<"YES\n";
        }
        else{
            int f=1;
            rep(i,n/2-y,n/2+y){
                if(b[i]!=a[i])f=0;
            }
            if(f==0)cout<<"NO\n";
            else cout<<"YES\n";
        }
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