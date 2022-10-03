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
    di(k)
    sin
    V one;
    one.push_back(-1);
    int n=s.length();
    repin{
        if(s[i]=='1')one.push_back(i);
    }
    one.push_back(n);
    V left(one.size()-2),right(one.size()-2);
    // give(one,one.size());cout<<"\n";
    rep(i,0,one.size()-2){
        left[i]=one[i+1]-one[i]-1;
    }
    rep(i,0,one.size()-2){
        right[i]=one[i+2]-one[i+1]-1;
    }
    string x(n,'0');
    if(s==x){
        if(k>=1)cout<<0<<"\n";
        else cout<<(n*(n+1))/2<<"\n";
        return 0;
    }
    // give(right,right.size());cout<<"\n";
    // give(left,left.size());cout<<"\n";
    int ans=0;
    rep(i,0,one.size()-2-k+1){
        ans+=(left[i]+1)*(right[i+k-1]+1) ;
    }
    if(k>=1)cout<<ans<<"\n";
    else{
        ans=0;
        rep(i,0,left.size()){
            ans+=((left[i])*(left[i]+1))/2;
        }
        ans+=((right[right.size()-1])*(right[right.size()-1]+1))/2;
        cout<<ans<<"\n";
    }
    return 0;
}