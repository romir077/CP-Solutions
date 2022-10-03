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
    din di(k)
    sin
    int a,b;
    rep(i,0,n){
        if(s[i]=='*') {a=i;break;}
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*') {b=i;break;}
    }
    int count=2,temp;
    rep(i,a,b+1){
        if(i+k>=b) break;
        if(s[i+k]=='*'){count++;i+=(k-1);}
        else{
            for(int z=i+k;z>a;z--){
                if(s[z]=='*'){
                    i+=(z-i-1);
                    count++;
                    break;
                }
            }
        }
        // else{
        //     if(s[i+2]=='*'){count++;i+=1;}
        //     else{count++;}
        // }
    }
    if(a==b) cout<<"1\n";
    else cout<<count<<"\n";
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}