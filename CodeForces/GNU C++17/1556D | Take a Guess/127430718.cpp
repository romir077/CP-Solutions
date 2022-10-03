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
    din di(k)
    
    int a,b,c,d,e,f;
    cout<<"and 1 2"<<endl;
    cin>>a;
    cout<<"or 1 2"<<endl;
    cin>>b;
    cout<<"and 2 3"<<endl;
    cin>>c;
    cout<<"or 2 3"<<endl;
    cin>>d;
    cout<<"and 1 3"<<endl;
    cin>>e;
    cout<<"or 1 3"<<endl;
    cin>>f;
    a=a+b;c=c+d;e=e+f;
    int x=(a+e+c)/2-c;
    int y=(a+e+c)/2-e;
    int z=(a+e+c)/2-a;
    V arr(n);
    arr[0]=x;arr[1]=y;arr[2]=z;
    rep(i,3,n){
        int h,g;
        cout<<"and 1 "<<i+1<<endl;
        cin>>h;
        cout<<"or 1 "<<i+1<<endl;
        cin>>g;
        h=h+g;
        arr[i]=h-x;
    }
    sort(all(arr));
    cout<<"finish "<<arr[k-1]<<endl;
    return 0;
}