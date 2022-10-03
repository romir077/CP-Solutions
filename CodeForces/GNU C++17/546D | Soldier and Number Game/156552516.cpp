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
    int t=1;
    cin>>t;
    vector<bool>prime(5000005,true);
    for (int p=2;p*p<5000005;p++) {
        if(prime[p]==true){
            for (int i=p*p;i<5000005;i+=p)
                prime[i]=false;
        }
    }
    // for(int i=2;i<30;i++){
    //     if(prime[i])cout<<i<<" ";
    // }
    vector<int>s(5000005,0);
    s[1]=0;
    for(int i=2;i<=5000004;i++){
        if(prime[i]){
            for(int j=i;j<=5000004;j+=i){
                int temp=0,x=j;
                while(x%i==0){temp++;x/=i;}
                s[j]+=temp;
            }
        }
    }
    // give(s,10);cout<<"\n";
    rep(i,2,5000005){
        s[i]=s[i-1]+s[i];
    }
    while(t--){
        dia dib
        cout<<s[a]-s[b]<<"\n";
    }
    return 0;
}