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
 
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dia dib
    if(a==1 && b==0) {cout<<"0 0\n";return 0;}
    if(b>9*a || (b==0 && a!=0)) cout<<"-1 -1\n";
    else{
        string s="";
        int l=a,m=b;
        while(a--){
            if(a!=0){
                if(b>9) {s='9'+s;b-=9;}
                else if(b>1 && b<=9) {string r=to_string(b-1);s=r+s;b=1;}
                else if(b==1) s='0'+s;
            }
            else{
                string r=to_string(b);s=r+s;
            }
        }
        cout<<s<<" ";
 
        s="";b=m;
        while(l--){
            if(b>=9) {s=s+'9';b-=9;}
            else if(b<9) {string r=to_string(b);s=s+r;b=0;}
            else if(b==0) s=s+'0';
        }
        cout<<s<<"\n";
    }
    return 0;
}