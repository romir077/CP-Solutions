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
    return sum;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dia dib
    if(a==b) cout<<"0 6 0\n";
    else{
        if(a<b){
            if((a+b)%2==0) cout<<(a+b)/2-1<<" "<<1<<" "<<6-(a+b)/2<<"\n";
            else cout<<(a+b)/2<<" 0 "<<6-(a+b)/2;
        }
        else{
            if((a+b)%2==0)cout<<6-(a+b)/2<<" "<<1<<" "<<(a+b)/2-1<<"\n";
            else cout<<6-(a+b)/2<<" 0 "<<(a+b)/2;
        }
    }
    return 0;
}