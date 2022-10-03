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
    string r;
    cin>>r;
    // set<char>st;
    vector<char>p;
    V a;
    vector<char>q;
    V b;
    rep(i,0,s.size()){
        char c=s[i];
        p.push_back(c);
        int l=0;
        while(s[i]==c){
            i++;
            l++;
        }
        i--;
        a.push_back(l);
    }
    rep(i,0,r.size()){
        char c=r[i];
        q.push_back(c);
        int l=0;
        while(r[i]==c){
            i++;
            l++;
        }
        i--;
        b.push_back(l);
    }
    if(p!=q)cout<<"No\n";
    else{
        rep(i,0,a.size()){
            if(a[i]==1 && b[i]>1){cout<<"No\n";return 0;}
            else{
                if(a[i]>b[i]){cout<<"No\n";return 0;}
            }
        }
        cout<<"Yes\n";
    }
    // give(a,a.size());cout<<"\n";
    // give(p,p.size());cout<<"\n";
    return 0;
}