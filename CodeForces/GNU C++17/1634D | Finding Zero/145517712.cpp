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
    int a=1,b=2;
    cout<<"? "<<1<<" "<<2<<" "<<3<<endl;
    int g;cin>>g;
    cout<<"? "<<1<<" "<<3<<" "<<4<<endl;
    int h;cin>>h;
    if(g<=h){
        a=2;b=3;
    }
    else {a=3;b=4;}
    int z=-1,y=0;
    V arr;
    rep(i,1,n+1){
        if(i==a || i==b)continue;
        cout<<"? "<<a<<" "<<b<<" "<<i<<endl;
        int c;
        cin>>c;
        if(c>z){
            z=c;
            y=i;
        }
        // arr.push_back(c);
    }
    int p=-1,q=0;
    
    // arr.clear();
    rep(i,1,n+1){
        if(i==y || i==a)continue;
        cout<<"? "<<a<<" "<<i<<" "<<y<<endl;
        int c;
        cin>>c;
        if(c>p){
            p=c;
            q=i;
        }
        arr.push_back(c);
    }
    if(count(all(arr),arr[0])==n-2){
        cout<<"! "<<a<<" "<<y<<endl;
        
    }
    else cout<<"! "<<q<<" "<<y<<endl;
 
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