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
#define MOD 1000000007
#define el cout<<endl;
using namespace std;
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sin
    V a,b;
    int n=s.length();
    int f=0;
    repin{
        if(f==0 && s[i]!='.' && s[i]!='e')a.push_back(s[i]-'0');
        if(f==1)b.push_back(s[i]-'0');
        if(s[i]=='e')f=1;
    }
    int x=0,y=b.size();
    rrep(i,y-1,0){
        x+=b[i]*power(10,y-i-1);
    }
    if(x==0){
        if(count(all(a),0)==a.size()){
            cout<<0;
            return 0;
        }
    }
    rrep(i,a.size()-1,0){
        if(a[i]==0)a.pop_back();
        else break;
    }
    rep(i,0,a.size()){
        cout<<a[i];
        if(i==x && i!=a.size()-1)cout<<'.';
    }
    int p=x-a.size()+1;
    if(p>0){
        while(p--){
            cout<<0;
        }
    }
 
    return 0;
}