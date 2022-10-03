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
using namespace std;
 
 
void solve(){
    din
    V a(n);
    repin cin>>a[i];
    int cnt=0;
    vector<int>b;
    if(n==1) cout<<"0\n";
    else{
    rep(i,0,n-1){
        if(__gcd(a[i],a[i+1])==1) continue;
        else{
            cnt++;
            b.push_back(i+1);
            b.push_back(i+2);
            if(a[i]==1500450271 && a[i+1]==1500450271) {b.push_back(a[i]);b.push_back(999999883);a[i+1]=999999883;continue;}
            if(a[i]==999999883 && a[i+1]==999999883) {b.push_back(a[i]);b.push_back(1500450271);a[i+1]=1500450271;continue;}
            if(a[i]>a[i+1] && i!=0 && a[i-1]==1500450271) {a[i]=999999883;b.push_back(999999883);b.push_back(a[i+1]);continue;}
            if(a[i]>a[i+1] && i!=0 && a[i-1]!=1500450271) {a[i]=1500450271;b.push_back(1500450271);b.push_back(a[i+1]);continue;}
            if(a[i]>a[i+1] && i==0) {a[0]=1500450271;b.push_back(1500450271);b.push_back(a[i+1]);continue;}
            if(a[i]<=a[i+1]) {b.push_back(a[i]);b.push_back(1500450271);a[i+1]=1500450271;continue;}
            // if(a[i]==a[i+1]) {b.push_back(a[i]);b.push_back(1);}
        }
    }
    if(b.size()==0) cout<<"0\n";
    else{
        cout<<cnt<<"\n";
        rep(i,0,b.size()){
            if((i+1)%4!=0) cout<<b[i]<<" ";
            else cout<<b[i]<<"\n";
        }
    }
    }
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