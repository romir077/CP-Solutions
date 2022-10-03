#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    ll n;
    cin>>n;
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        if(b>a){
            if(b%a==0)
            cout<<(b/a)<<"\n";
            else
            cout<<(b/a)+1<<"\n";
        }
        else if(a==b){
            cout<<1<<"\n";
        }
        else{
            if(a%b==0)
            cout<<1<<"\n";
            else
            cout<<2<<"\n";
        }
    }
    return 0;
}