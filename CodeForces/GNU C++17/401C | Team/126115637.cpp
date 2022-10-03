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
    if(a>b+1 || b>2*(a+1)) cout<<"-1\n";
    else{
        if(a==b+1 || a==b){
            rep(i,0,a+b) {cout<<((i%2==0)? '0': '1');}
        }
        else{
            int x=b-(a+1);
            rep(i,0,2*a+1){
                if(i%2==0){
                    if(x>0){cout<<"11";x--;}
                    else cout<<'1';
                }
                else{
                    cout<<'0';
                }
            }
        }
    }
    return 0;
}