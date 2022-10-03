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
    dia dib
    if(b==0){cout<<a<<"\n";return;}
    int d=(b-1)/4;
    int r=(b-1)%4;
    // int w=0,x=0,y=0,z=0;
    // int nw=d,nx=d,ny=d,nz=d;
    int w=1+d*4;
    if(r==3){w+=b;w-=b-1;w-=b-2;}
    if(r==2){w-=b;w-=b-1;}
    if(r==1){w-=b;}
    if(a%2==0)cout<<a-w<<"\n";
    else cout<<a+w<<"\n";
    // w=(nw*(2*2+(nw-1)*4))/2;
    // x=(nx*(2*3+(nx-1)*4))/2;
    // y=(ny*(2*4+(ny-1)*4))/2;
    // z=(nz*(2*5+(nz-1)*4))/2;
    // w*=-1;
    // x*=-1;
 
    // if(r==0){nw++;nx++;ny++;}
 
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