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
    din di(m)
    map<int,int> mod;
    rep(i,0,n){
        dix
        mod[x%m]++;
    }
    if(m==1) {cout<<"1\n";return;}
    int cnt=0;
    if(mod[0]!=0) cnt++;
    // cout<<cnt<<"\n";
    rep(i,1,m/2){
        if(mod[i]==0 || mod[m-i]==0) cnt+=max(mod[i],mod[m-i]);
        else{
            if(abs(mod[i]-mod[m-i])<=1) cnt++;
            else cnt+=(max(mod[m-i],mod[i])-min(mod[i],mod[m-i]));
        }
    }
    if(m%2==0 && mod[m/2]!=0) cnt++;
    if(m%2==1){
        if(mod[m/2]==0 || mod[m/2+1]==0) cnt+=max(mod[m/2],mod[m/2+1]);
        else{
            if(abs(mod[m/2]-mod[m/2+1])<=1) cnt++;
            else cnt+=(max(mod[m/2+1],mod[m/2])-min(mod[m/2],mod[m/2+1]));
        }
    }
    cout<<cnt<<"\n";
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