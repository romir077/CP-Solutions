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
    
 
void solve(vector<int>vec){
    din
    vector<int> :: iterator itr;
    itr=upper_bound(all(vec),n);
    cout<<(itr-vec.begin())<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    V vec;
    int a=1,b=1;
    while(a*a<=1e9 || b*b*b<=1e9){
        vec.push_back(min(a*a,b*b*b));
        if(a*a==b*b*b){a++;b++;continue;}
        if((a)*(a)<(b)*(b)*(b)){
            a++;
        }
        else{
            b++;
        }
    }
    di(t)
    while(t--){
        solve(vec);
    }
    return 0;
}