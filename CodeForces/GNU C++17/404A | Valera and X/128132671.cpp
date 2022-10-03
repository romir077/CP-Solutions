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
    din
    map<char,int>mp;
    set<char>s;
    vector<string>a(n);
    repin{
        cin>>a[i];
        rep(j,0,n){
            mp[a[i][j]]++;
            s.insert(a[i][j]);
        }
    }
    char c=a[0][0];
    if(s.size()!=2) cout<<"NO\n";
    else{
        if(mp[a[0][0]]!=2*n-1)cout<<"NO\n";
        else{
            repin{
                if(a[i][i]!=c){cout<<"NO\n";return 0;}
            }
            repin{
                if(a[i][n-1-i]!=c){cout<<"NO\n";return 0;}
            }
            cout<<"YES\n";
        }
    }
 
    return 0;
}