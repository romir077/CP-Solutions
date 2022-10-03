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
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;}
 
void solve(){
    din
    sin
    int x=n/2;
    if(count(all(s),'1')==n){
        cout<<1<<" "<<x<<" "<<2<<" "<<x+1<<"\n";
    }
    else{    
        if(s[x]=='0') cout<<"1 "<<x+1<<" 1 "<<x<<"\n";
        else if(s[n-x-1]=='0') cout<<n-x<<" "<<n<<" "<<n-x+1<<" "<<n<<"\n";
        else{
            rep(i,1,n-x){
                if(s[i-1]=='0') {cout<<i<<" "<<i+x<<" "<<i+1<<" "<<i+x<<"\n";break;}
                else if(s[i+x]=='0') {cout<<i+1<<" "<<i+x+1<<" "<<i+1<<" "<<i+x<<"\n";break;}
            }
        }
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