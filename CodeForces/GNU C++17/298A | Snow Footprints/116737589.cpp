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
 
signed main()
{
    din sin
    if(count(all(s),'L')==0){
        int a,b,flag=0;
        rep(i,0,n) {
            if(s[i]=='R' && flag==0){flag=1;a=i+1;}
            if(s[i]=='.' && flag==1) {b=i+1;break;}
        }
        cout<<a<<" "<<b<<"\n";
    }
    else if(count(all(s),'R')==0){
        int a,b,flag=0;
        rep(i,0,n) {
            if(s[i]=='L' && flag==0){flag=1;a=i+1;}
            if(s[i]=='.' && flag==1) {b=i+1;break;}
        }
        cout<<b-1<<" "<<a-1<<"\n";
    }
    else{
        int a,b,flag=0;
        rep(i,0,n) {
            if(s[i]=='R' && flag==0){flag=1;a=i+1;}
            if(s[i]=='L' && flag==1) {b=i+1;break;}
        }
        cout<<a<<" "<<b-1<<"\n";
    }
    return 0;
}