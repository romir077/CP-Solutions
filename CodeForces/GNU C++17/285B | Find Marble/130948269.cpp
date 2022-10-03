#include<bits/stdc++.h>
 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repit for(auto it=m.begin();it!=m.end();++it)
#define repin rep(i,0,n)
#define key ((*it).first)
#define val ((*it).second)
 #define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define dim di(m)
#define dik di(k)
#define dis di(s)
#define dit di(t)
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
// sort all(x) time complexity is nlogn
#define sis string s;
#define sin string s;cin>>s;
#define  f first
#define  sec second
//you dont want case sensitive
// toupper(x);
//tolower(x);
// find min or max of three nos= min({x,y,z})or max({x,y,z});
 
#define precise(i) cout<<fixed<<setprecision(i)
    
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
using namespace std;
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    din dis dit
    unordered_map<int,int> m;
    repin{
        cin>>m[i+1];
    }
    if(s!=t){
        if(m[s]==s||m[t]==t){
            cout<<"-1";return;
        }
 
    }
    if(s==t){cout<<"0";return;}
    int k=s,ct=0;
    while(k!=t){
        k=m[k];
        ct++;
        if(k==s){cout<<-1<<"\n";return;}
    }
    cout<<ct<<endl;
    
}
 
 
int32_t main()
{
    IOS;
   {
        solve();
    }
    return 0;
}