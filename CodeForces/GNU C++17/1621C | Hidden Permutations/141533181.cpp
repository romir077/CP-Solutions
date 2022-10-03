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
    int x=2*n;
    V a(n+1,0);
    int b=1;
    V c;
    vector<vector<int>>d;
    while(x--){
        
        cout<<"? "<<b<<endl;
        int z;
        cin>>z;
        if(a[z]==0){
            a[z]=1;
            c.push_back(z);
        }
        else{
            d.push_back(c);
            c.clear();
            int l=-1;
            rep(i,b+1,n+1){
                if(a[i]==0){
                    b=i;
                    break;
                }
                if(i==n)l=0;
            }
            if(l==0)break;
        }
    }
    V k(n+1,0);
    rep(i,0,(int)d.size()){
        int f=(int)d[i].size();
        rep(j,0,f){
            k[d[i][j]]=d[i][(j+1)%f];
        }
    }
    cout<<"! ";
    repin{
        cout<<k[i+1]<<" ";
    }
    cout<<endl;
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