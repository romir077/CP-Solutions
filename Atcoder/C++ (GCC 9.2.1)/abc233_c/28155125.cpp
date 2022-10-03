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

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din dix
    vector<vector<int>>a(n);
    repin{
        dib
        a[i].push_back(b);
        rep(j,0,b){
            di(k)
            a[i].push_back(k);
        }
    }
    V c;
    rep(i,0,(int)a[0].size()-1){
        if(a[0][i+1]<=x)c.push_back(a[0][i+1]);
    }
    rep(i,1,n){
        V d;
        rep(j,0,(int)c.size()){
            rep(k,0,(int)a[i].size()-1){
                if(c[j]*a[i][k+1]>0 && c[j]*a[i][k+1]<=x)d.push_back(c[j]*a[i][k+1]);
            }
        }
        c=d;
        d.clear();
    }
    cout<<count(all(c),x);
    return 0;
}