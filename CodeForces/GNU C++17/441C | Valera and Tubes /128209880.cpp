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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(m) di(k)
    V a;
    for(int i=1;i<n+1;i++){
        if(i%2==1){
            for(int j=1;j<m+1;j++){a.push_back(i);a.push_back(j);}
        } 
        else{
            for(int j=m;j>=1;j--){a.push_back(i);a.push_back(j);}
        }
    }
    rep(i,0,k-1){
        cout<<"2 ";
        for(int j=4*i;j<4*i+4;j++)cout<<a[j]<<" ";
        cout<<"\n";
    }
    cout<<n*m-2*(k-1)<<" ";
    for(int i=4*(k-1);i<2*n*m;i++)cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}