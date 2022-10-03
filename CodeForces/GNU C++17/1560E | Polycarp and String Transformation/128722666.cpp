#include<bits/stdc++.h>
// #include <boost/algorithm/string.hpp>
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
// using namespace boost::multiprecision;
using namespace std;
 
void removeChar(string& s, char c)
{
 
    int j, n = s.length();
    for (int i = j = 0; i < n; i++)
        if (s[i] != c)
            s[j++] = s[i];
 
    s=s.substr(0,j);
}
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    sin
    string r="";
    unordered_set<char>st;
    int n=s.length();
    rrep(i,n-1,0){
        if(st.find(s[i])==st.end()){
            st.insert(s[i]);
            r+=s[i];
        }
    }
    reverse(all(r));
    map<char,int>mp;
    repin mp[s[i]]++;
    int x=r.length();
    rep(i,0,x){
        if((mp[r[i]]/(i+1))*(i+1)!=mp[r[i]]){cout<<"-1\n";return;}
    }
    string g="";
    int y=0;
    rep(i,0,x){
        y+=(mp[r[i]]/(i+1));
    }
    rep(i,0,y)g+=s[i];
    string p=g;
    // char* h;
    // h=&g[0];
    string f="";
    rep(i,0,x){
        f+=g;
        removeChar(g,r[i]);
    }
    if(f==s)cout<<p<<" "<<r<<"\n";
    else cout<<"-1\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}