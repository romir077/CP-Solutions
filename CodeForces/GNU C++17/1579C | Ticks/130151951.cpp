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
    din di(m) di(k)
    vector<string> a(n);
    take(a,n);
    vector<string> b(n);
    repin{
        rep(j,0,m)b[i].push_back('.');
    }
    while(k<11){
        repin{
            rep(j,0,m){
                if(i>=k && j>=k && m-1-j>=k && a[i][j]=='*'){
                    int f=1;
                    for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)if(a[p][q]=='.')f=0;
                    for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)if(a[p][q]=='.')f=0;
                    if(f==1){
                        for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)b[p][q]='*';
                        for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)b[p][q]='*';
                    }
                }
            }
        }
        k++;
    }
    // repin cout<<b[i]<<"\n";
    repin{
        rep(j,0,m){
            if(b[i][j]=='.' && a[i][j]=='*') {cout<<"NO\n";return;}
            if(b[i][j]=='*' && a[i][j]=='.') {cout<<"NO\n";return;}
        }
    }
    cout<<"YES\n";
    
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