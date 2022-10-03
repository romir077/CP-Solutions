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
    sin
    if(count(all(s),'1')==0 || count(all(s),'2')==0 || count(all(s),'3')==0) cout<<"0\n";
    else{
        int cnt=1,a=0,b=0,c=0,min=INT_MAX;
        rep(i,1,s.length()){
            if(s[i]!=s[i-1] && s[i]!=s[a]) {
                cnt++;
                if(cnt==2) b=i;
                if(cnt==3) {
                    c=i;
                    if(c-a+1<=min) {min=c-a+1;}
                    int temp=b;a=temp;b=c;cnt=2;
                }
            }
            else{
                if(cnt==1 && s[i]==s[i-1]) a=i;
                if(cnt==2 && s[i]==s[i-1]) b=i;
                if(cnt==2 && s[i]==s[a]) {a=b,b=i;}
            }
        }
        // cout<<a<<" "<<b<<" "<<c<<" ";
        cout<<min<<"\n";
    }
}
 
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}