#include<bits/stdc++.h>
#define ll long long
#define int long long
#define rep(i,a) for(int i=0;i<a;i++)
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
 
signed main()
{
    di(t)
    while(t--){
        din dix diy
        V a(n);
        rep(i,n){
            cin>>a[i];
        }
        int flag=0;
        rep(i,n-1){
            if(a[i]==a[i+1] && flag==0){
                continue;
            }
            if(abs(a[i]-a[i+1])==1){
                flag=1;
            }
            if(abs(a[i]-a[i+1])>=2){
                flag=2;
                break;
            }
        }
        if(flag==0){
            cout<<y+min(x,y)<<"\n";
        }
        if(flag==1){
            cout<<min(x,y)<<"\n";
        }
        if(flag==2){
            cout<<"0\n";
        }
    }
    return 0;
}