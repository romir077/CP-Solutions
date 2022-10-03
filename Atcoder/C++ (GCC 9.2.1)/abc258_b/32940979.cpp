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


string solve(int x,int y,vector<string>&a,int n){
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    string ans(n,'0');
    for(int i=0;i<8;i++){
        // cout<<i<<" ";
        string r="";
        r+=a[x][y];
        int x1=x,y1=y;
        for(int j=0;j<n-1;j++){
            x1+=dx[i];
            y1+=dy[i];
            x1+=n;
            y1+=n;
            x1%=n;
            y1%=n;
            // cout<<x1<<y1;
            r+=a[x1][y1];
            // cout<<r;
        }
        // cout<<r<<" ";
        ans=max(ans,r);
    }
    // cout<<"ad";

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din
    vector<string>a(n);
    string ans(n,'0');
    repin cin>>a[i];
    rep(i,0,n){
        rep(j,0,n){
            // cout<<i<<j;
            string x=solve(i,j,a,n);
            ans=max(ans,x);
        }
    }
    cout<<ans<<"\n";
    return 0;
}