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
    din di(k)
    sin
    V b(26,0);
    // map<char,int>mp;
    repin{
        b[s[i]-97]++;
        // mp[s[i]]++;
    }
    if(n==k){cout<<1<<"\n";return;}
    sort(all(b),greater<int>());
    V odd,even;
    int esum=0,osum=0;
    for(auto i:b){
        if(i%2==0){even.push_back(i);esum+=i;}
        if(i%2==1){odd.push_back(i);osum+=i;}
        // if(i%2==1)odd.push_back(i);
    }
    // sort(all(odd));
    // sort(all(even));
    // for(auto i:odd){osum+=i;}
    // for(auto i:even){esum+=i;}
    int mini=0;
    int todd=odd.size();
    // if(esum>=k)mini++;
    rep(i,0,odd.size()){
        esum+=odd[i]-1;
    }
    int x=esum/k;
    if(x%2==1)x--;
    mini+=x;
    esum=esum-x*k;
    todd+=esum;
    // sort(all(odd),greater<int>());
    // if(odd.size()>0){
    //     sort(all(odd),greater<int>());
    //     if(odd[0]>=k)mini++;
    // }
    // osum=0;
    // for(auto i:odd)osum+=i;
    if(todd>=k)mini++;
    // rep(i,0,26){
    //     int x=b[i]/k;
    //     if(x%2==1)x--;
    //     b[i]=b[i]-x*k;
    //     mini+=x;
    // }
    // sort(all(b),greater<int>());
    // if(b[0]>=k)mini++;
    cout<<mini<<"\n";
 
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