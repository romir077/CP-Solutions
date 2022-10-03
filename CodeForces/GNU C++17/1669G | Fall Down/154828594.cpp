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
    din di(m)
    vector<string>a(n);
    take(a,n);
    rep(i,0,m){
        V b,c;
        c.push_back(n);
        rrep(j,n-1,0){
            if(a[j][i]=='*')b.push_back(j);
            if(a[j][i]=='o')c.push_back(j);
        }
        c.push_back(-1);
        rep(j,0,c.size()-1){
            int x=1;
            rep(k,0,b.size()){
                if(b[k]<c[j] && b[k]>c[j+1]){b[k]=c[j]-x;x++;}
            }
        }
        rep(j,0,b.size()){
            a[b[j]][i]='*';
        }
        V d;
        rep(i,1,c.size()-1)d.push_back(c[i]);
        for(auto i:b)d.push_back(i);
        sort(all(d));
        // give(d,d.size());cout<<"\n";
        int l=0;
        if(d.size()>0){
            rep(j,0,n){
                if(d[l]!=j){
                    a[j][i]='.';
                }
                else l++;
            }
        }
        // rrep(j,n-1,n-(int)b.size()){
        //     a[j][i]=b[n-1-j];
        // }
        // rrep(j,n-b.size()-1,0){
        //     a[j][i]='.';
        // }
 
    }
    repin{
        rep(j,0,m){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
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