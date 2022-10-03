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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
 
void solve(){
    din
    int sum=0;
    string s; 
    stringstream ss;  
    ss << n;  
    ss >> s;
    sum+=(s.size()-1)*9;
        int flag=0;
        rep(j,0,s.size()-1){
            if(s[j]<s[j+1]){sum+=s[0]-'0';flag=1;break;}
            else if(s[j]==s[j+1]) continue;
            else{sum+=s[0]-'0'-1;flag=1;break;}
        }
    if(flag==0) sum+=s[0]-'0';
    if(s.size()==1) cout<<n<<"\n";
    else cout<<sum<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}