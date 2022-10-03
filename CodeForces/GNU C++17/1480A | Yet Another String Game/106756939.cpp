#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    din
    rep(i,n){
        sin
        rep(i,s.length()){
            if(i%2==0){
                if(s[i]=='a'){
                    s[i]='b';
                }
                else{
                    s[i]='a';
                }
            }
            else{
                if(s[i]=='z'){
                    s[i]='y';
                }
                else{
                    s[i]='z';
                }
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}