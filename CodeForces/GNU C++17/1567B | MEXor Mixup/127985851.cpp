#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
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
 
int arr[300001],x=0;
 
void solve(){
    dia dib
    // cout<<x<<" ";
    if(arr[a-1]==b)cout<<a<<"\n";
    else {
        if((arr[a-1]^b) == a)cout<<a+2<<"\n";
        else cout<<a+1<<"\n";
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    arr[0]=0;
    rep(i,1,300002){
        x=(x^i);
        arr[i]=x;
    }
    di(t)
    while(t--){
        solve();
    }
    return 0;
}