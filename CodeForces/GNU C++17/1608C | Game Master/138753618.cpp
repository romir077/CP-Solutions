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
 
void solve(){
int n;
cin>>n;
vector<pair<int,int>> a(n),b(n);
map<int,int> mp1,mp2;
rep(i,0,n){
    int x;
    cin>>x;
    a[i].first=x;
    a[i].second=i+1;
}
rep(i,0,n){
    int x;
    cin>>x;
    b[i].first=x;
    b[i].second=i+1;
}
 
sort(all(a),greater<pair<int,int>>());
sort(all(b),greater<pair<int,int>>());
 
rep(i,0,n){
mp1[a[i].second]=i;
mp2[b[i].second]=i;
}
int i=0,j=0;
int maxi=0,maxj=0;
 
while(i<=maxi && j<=maxj){
    maxi=max(maxi,mp1[b[j].second]);
    maxj=max(maxj,mp2[a[i].second]);
    if(i<maxi) i++;
    if(j<maxj) j++;
    if(i==maxi && j==maxj)
    break;
}
string s="";
rep(i,0,n){
    s+="0";
}
 
for(int i=0;i<=maxi;i++){
    s[a[i].second-1]='1';
}
 
for(int j=0;j<=maxj;j++){
    s[b[j].second-1]='1';
}
cout<<s<<endl;
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