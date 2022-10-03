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
    dia dib
    int n=s.length();
    int pre[n],suf[n],x[n];
    x[n-1]=((int)(s[n-1]-'0'))%b;
    x[n-2]=10%b;
    rrep(i,n-3,0){
        x[i]=(x[i+1]*10)%b;
    }
    rrep(i,n-2,0){
        x[i]=(x[i]*(int)(s[i]-'0'))%b;
    }
    pre[0]=(int)(s[0]-'0')%a;
    rep(i,1,n){
        pre[i]=(10*pre[i-1]+(int)(s[i]-'0'))%a;
    }
    suf[n-1]=(int)(s[n-1]-'0')%b;
    rrep(i,n-2,0){
        suf[i]=(suf[i+1]+x[i])%b;
    }
    // give(suf,n);
    rep(i,0,n-1){
        if(pre[i]==0 && suf[i+1]==0){
            if(s[i+1]!='0'){cout<<"YES\n"<<s.substr(0,i+1)<<"\n"<<s.substr(i+1,s.length()-i+1)<<"\n";return 0;}
        }
    }
    cout<<"NO\n";
    return 0;
}