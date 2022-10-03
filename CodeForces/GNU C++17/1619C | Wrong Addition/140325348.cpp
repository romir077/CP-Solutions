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
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    dia dib
    V v;
    while(b){
        int x=a%10,y=b%10;
        b/=10;
        a/=10;
        if(x<=y){
            v.push_back(y-x);
        }
        else{
            int z=b%10;
            b/=10;
            if(z!=1){cout<<"-1\n";return;}
            v.push_back(10+y-x);
        }
    }
    if(a!=0){cout<<-1<<"\n";return;}
    // give(v,v.size());
    // cout<<" ";
    string s="";
    rrep(i,v.size()-1,0){
        s+=to_string(v[i]);
    }
    if(s!=""){
        // cout<<s<<"\n";
        int first=0;
        for(auto i:s){
            if(i=='0')first++;
            else break; 
        }
        cout<<s.substr(first)<<"\n";
    }
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