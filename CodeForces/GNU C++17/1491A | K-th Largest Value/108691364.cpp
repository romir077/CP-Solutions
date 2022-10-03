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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    din di(q)
    V a(n);
    int one=0,zero=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]==1) one++;
        else zero++;
        // b[i]=a[i];
    }
    rep(i,q){
        dix diy
        if(x==1){
            if(a[y-1]==1){
                a[y-1]=1-a[y-1];
                one--;
                zero++;
            }
            else{
                a[y-1]=1-a[y-1];
                one++;
                zero--;
            }
        }
        else{
            if(y>one){
                cout<<0<<"\n";
            }
            else{
                cout<<1<<"\n";
            }
        }
    }
 
    return 0;
}