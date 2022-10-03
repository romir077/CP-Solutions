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
    din dia dib
    if(a==0 && b==0){
        rep(i,1,n+1){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(abs(a-b)>1 || a+b>n-2){cout<<"-1\n";return;}
    else{
        if(a>b){
            rep(i,0,2*a){
                if(i%2==0)cout<<i/2+1<<" ";
                else cout<<n-i/2<<" ";
            }
            rrep(i,n-(2*a-1)/2-1,a+1){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(a<b){
            rep(i,0,2*b){
                if(i%2==1)cout<<i/2+1<<" ";
                else cout<<n-i/2<<" ";
            }
            rep(i,b+1,n-b+1){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            rep(i,0,2*a+1){
                if(i%2==0)cout<<i/2+1<<" ";
                else cout<<n-i/2<<" ";
            }
            rep(i,a+2,n-a+1){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
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