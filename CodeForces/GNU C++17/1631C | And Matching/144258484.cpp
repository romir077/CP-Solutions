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
    if(k==n-1){
        if(n==4)cout<<"-1\n";
        else{
            cout<<n-1<<" "<<n-2<<"\n";
            cout<<n-3<<" "<<"1\n";
            cout<<"0 2\n";
            rep(i,3,n/2){
                cout<<i<<" "<<n-i-1<<"\n";
            }
        }
        return;
    }
    else if(k==0){
        rep(i,0,n/2){
            cout<<i<<" "<<n-i-1<<"\n";
        }
    }
    else{
        cout<<n-1<<" "<<k<<"\n";
        cout<<0<<" "<<n-k-1<<"\n";
        rep(i,0,n/2){
            if(i==k || i==0 || i==n-k-1){
                // cout<<i<<" "<<0<<"\n";
                continue;
            }
            else{
                cout<<i<<" "<<n-i-1<<"\n";
            }
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