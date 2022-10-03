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
#define take(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';cout<<"\n";
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
    din
    vector<vector<int>> a(n,vector<int>(n,0));
    repin{
        rep(j,0,n){
            cin>>a[i][j];
        }
    }
    // rep(j,0,n){
    //     give(a[j],n);
    // }
    V l(2*n-1,0),r(2*n-1,0);
    rep(i,0,2*n-1){    
        int x=(i<n?i:n-1);
        int y=(i<n?i+1:2*n-i-1);
        int z=(i<n?0:i+1-n);
        // cout<<x<<" "<<y<<" "<<z<<" ";
        rep(j,0,y){
            l[i]+=a[x-j][z+j];
        }
        // cout<<l[i]<<"\n";
    }
    // give(l,2*n-1);
 
    rep(i,0,2*n-1){
        int x=(i<n?0:i+1-n);
        int y=(i<n?i+1:2*n-i-1);
        int z=(i<n?n-1-i:0);
        rep(j,0,y){
            r[i]+=a[x+j][z+j];
        }
    }
    // give(r,2*n-1);
    int sum[n][n];
 
    repin{
        rep(j,0,n){
            sum[i][j]=l[i+j]+r[i+n-j-1]-a[i][j];
        }
    }
    // repin {give(sum[i],n);}
    int x=0,y=0;
    int p=INT_MIN,q=INT_MIN,d=INT_MIN,f=INT_MIN;
    rep(i,0,n){
        if(i%2==0){
            for(int j=0;j<n;j+=2){
                if(sum[i][j]>=x){x=sum[i][j];d=i;f=j;}
            }
        }
        else{
            for(int j=1;j<n;j+=2){
                if(sum[i][j]>=x){x=sum[i][j];d=i;f=j;}
            }
        }
    }
    rep(i,0,n){
        if(i%2==0){
            for(int j=1;j<n;j+=2){
                if(sum[i][j]>=y){y=sum[i][j];p=i;q=j;}
            }
        }
        else{
            for(int j=0;j<n;j+=2){
                if(sum[i][j]>=y){y=sum[i][j];p=i;q=j;}
            }
        }
    }
    cout<<x+y<<"\n"<<p+1<<" "<<q+1<<" "<<d+1<<" "<<f+1<<"\n";
    return 0;
}