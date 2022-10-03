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
    din di(m)
    sin
    int u=0,d=0,l=0,r=0;
    int i=0;
    int x=0,y=0;
    while(abs(l)+r<=m-1 && u+abs(d)<=n-1 && i<=s.length()-1){
        if(s[i]=='R'){
            x++;
            if(x>r){r=x;}
            if(!(abs(l)+r<=m-1 && u+abs(d)<=n-1)) {r--;break;}
        }
        if(s[i]=='L'){
            x--;
            if(x<l){l=x;}
            if(!(abs(l)+r<=m-1 && u+abs(d)<=n-1)) {l++;break;}
        }
        if(s[i]=='D'){
            y--;
            if(y<d){d=y;}
            if(!(abs(l)+r<=m-1 && u+abs(d)<=n-1)) {d++;break;}
        }
        if(s[i]=='U'){
            y++;
            if(y>u){u=y;}
            if(!(abs(l)+r<=m-1 && u+abs(d)<=n-1)) {u--;break;}
        }
        // cout<<x<<" "<<y<<" "<<l<<" "<<r<<" "<<u<<" "<<d<<"\n";
        i++;
    }
            // cout<<x<<" "<<y<<" "<<l<<" "<<r<<" "<<u<<" "<<d<<"\n";
// /
    cout<<1+u<<" ";
if(abs(l)==0)cout<<1<<"\n";
else cout<<abs(l)+1<<"\n";
 
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