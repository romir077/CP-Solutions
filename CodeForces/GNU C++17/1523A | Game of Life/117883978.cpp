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
    dia dib
    sin
    while(b--){
        V zero,temp;
        rep(i,0,a){
            if(s[i]=='0') zero.push_back(i);
        }
        rep(i,0,zero.size()){
            if(zero[i]==0 && s[zero[i]+1]=='1') temp.push_back(zero[i]);
            if(zero[i]==a-1 && s[zero[i]-1]=='1') temp.push_back(zero[i]);
            if(zero[i]>0 && zero[i]<a-1){
                if((s[zero[i]-1]=='1' && s[zero[i]+1]=='0')||(s[zero[i]+1]=='1' && s[zero[i]-1]=='0')) temp.push_back(zero[i]);
            }
        }
        if(temp.size()==0) break;
        rep(i,0,temp.size()){
            s[temp[i]]='1';
        }
        
    }
    cout<<s<<"\n";
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