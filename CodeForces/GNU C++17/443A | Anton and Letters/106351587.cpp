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
    sis
    getline(cin,s);
    vector <char> ss={0};
    rep(i,s.size()){
        if(s[i]>=97 && s[i]<=122){
            int flag=0;
            rep(j,ss.size()){
                if(ss[j]!=s[i]){
                   // cout<<"X";
                    continue;
                }
                flag=1;
                //cout<<"Y";
            }
          //  cout<<"Z";
            if(flag!=1){
            ss.push_back(s[i]);
           // cout<<"A";
            }
        }
        continue;
    }
   // cout<<"B";
    cout<<ss.size()-1<<"\n";
    return 0;
}