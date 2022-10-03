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
    din
    string s="";
    repin s+='0';
    repin s+='1';
    string r=s;
    int c=n;
    rep(i,0,n){cout<<'(';}
    rep(i,0,n){cout<<')';}
    cout<<"\n";
    c--;
    next_permutation(all(s));
    while(s!=r && c>0){
        int x=0;
        rep(i,0,2*n){
            if(s[i]=='0')x++;
            else x--;
            if(x<0)goto x;
        }
        rep(i,0,2*n){
            if(s[i]=='0')cout<<"(";
            else cout<<")";
        }
            c--;
        cout<<endl;
 
        x:;
        next_permutation(all(s));
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