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
#define give(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' ';
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
    sin
    int n=s.length();
    char c=s[0];
    int x=1;
    V a;
    vector<char>b;
    rep(i,1,n){
        if(s[i]==c)x++;
        else{
            a.push_back(x);
            x=1;
            b.push_back(c);
            c=s[i];
        }
    }
    a.push_back(x);
    x=1;
    string r="";
    b.push_back(c);
    // rep(i,0,a.size())cout<<a[i]<<" ";
    // cout<<endl;
    // rep(i,0,a.size())cout<<b[i]<<" ";
    // cout<<endl;
    if(a.size()==1){
        if(a[0]>=2)cout<<b[0]<<b[0];
        else cout<<b[0];
        return 0;
    }
    if(a[0]>=2)a[0]=2;
    rep(i,1,b.size()-1){
        if(a[i]>=2 && a[i+1]>=2 && a[i-1]>=2){a[i]=1;continue;}
        if(a[i]>=2 && a[i+1]==1 && a[i-1]>=2){a[i]=1;continue;}
        if(a[i]>=2 && a[i+1]==1 && a[i-1]==1){a[i]=2;continue;}
        if(a[i]==1 && a[i+1]==1 && a[i-1]==1){continue;}
        if(a[i]>=2 && a[i+1]>=2 && a[i-1]==1){a[i]=2;continue;}
        if(a[i]==1 && a[i+1]>=2 && a[i-1]>=2){continue;}
        if(a[i]==1 && a[i+1]==1 && a[i-1]>=2){continue;}
        if(a[i]==1 && a[i+1]>=2 && a[i-1]==1){continue;}
    }
    if(a[a.size()-1]>=2 && a[a.size()-2]>=2)a[a.size()-1]=1;
    if(a[a.size()-1]>=2 && a[a.size()-2]==1)a[a.size()-1]=2;
    // rep(i,0,a.size())cout<<a[i]<<" ";
    // cout<<endl;
    // rep(i,0,a.size())cout<<b[i]<<" ";
    // cout<<endl;
    rep(i,0,a.size()-1){
        if(a[i]==1){r+=b[i];}
        if(a[i]==2){r+=b[i];r+=b[i];}
    }
    if(a.back()==1)r+=b.back();
    if(a.back()>=2){r+=b.back();r+=b.back();}
    cout<<r<<'\n';
    return 0;
}