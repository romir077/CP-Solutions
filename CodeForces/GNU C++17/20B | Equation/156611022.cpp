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
    double a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==0){cout<<-1;return 0;}
    if(a==0){
        if(b==0){
            if(c!=0)cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
            precise(8)<<(-1*c)/b;
        }
        return 0;
    }
    if(b*b<4*a*c)cout<<"0\n";
    else if(b*b==4*a*c){
        cout<<1<<"\n";
        if(a!=0)cout<<(-1*b)/(2*a);
        else{
            if(b==0){
                if(c!=0)cout<<0<<"\n";
            }
            else{
                cout<<(-1*c)/b;
            }
        }
    }
    else{
        cout<<2<<"\n";
        if(a>0){
            precise(8)<<(-1*b-sqrt(b*b-4*a*c))/(2*a)<<"\n";
            precise(8)<<(-1*b+sqrt(b*b-4*a*c))/(2*a)<<"\n";
        }
        else{
            precise(8)<<(-1*b+sqrt(b*b-4*a*c))/(2*a)<<"\n";
            precise(8)<<(-1*b-sqrt(b*b-4*a*c))/(2*a)<<"\n";
        }
    }
    return 0;
}