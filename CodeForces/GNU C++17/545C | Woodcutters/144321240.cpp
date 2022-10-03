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
    din
    int ans=((n<2)?1:2);
    vpii a(n);
    V b(n,0);
    b[0]=-1;
    b.back()=1;
    repin{
        cin>>a[i].first>>a[i].second;
    }
    rep(i,1,n-1){
        if(b[i-1]==1){
            if(a[i].first-a[i-1].first-(a[i-1].second)>a[i].second){b[i]=-1;ans++;}
            else if(a[i+1].first-a[i].first>a[i].second){b[i]=1;ans++;}
        }
        else{
            if(a[i].first-a[i-1].first>a[i].second){b[i]=-1;ans++;}
            else if(a[i+1].first-a[i].first>a[i].second){b[i]=1;ans++;}
        }
    }
    cout<<ans<<"\n";
    return 0;
}