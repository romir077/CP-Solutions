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
map<char,int>mp;

bool sortbyme(string a,string b){
    rep(i,0,min(a.length(),b.length())){
        if(mp[a[i]]!=mp[b[i]])return mp[a[i]]<mp[b[i]];
    }
    // int x=min(a.length(),)
    // if(a.length())
    return a.length()<b.length();
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sin
    rep(i,0,26){
        mp[s[i]]=i+1;
    }
    din
    vector<string>arr(n);
    take(arr,n);
    sort(all(arr),sortbyme);
    repin{
        cout<<arr[i]<<"\n";
    }
    return 0;
}