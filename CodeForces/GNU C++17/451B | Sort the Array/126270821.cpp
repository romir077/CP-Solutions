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
    din
    V a(n);
    repin cin>>a[i];
    int x=INT_MIN;
    V b(n);
    repin{
        if(a[i]<x){b[i]=0;x=a[i];}
        else{b[i]=1;x=a[i];}
    }   
    int cnt=0,y=0,z=INT_MAX,m=0,p=0,q=0,r=0;
    rep(i,0,n-1){
        if(b[i+1]==0 && b[i]==1){cnt++;y=a[i];p=i;}
        if(b[i+1]==1 && b[i]==0){z=a[i+1];m=a[i];q=i;}
    }
    if(count(all(b),0)==0){cout<<"yes\n"<<1<<" "<<1;return 0;}
    if(cnt==1){
        if(y>z)cout<<"no";
        else{
            if(z==INT_MAX){
                if(p!=0){
                    if(a[p-1]<a[n-1])cout<<"yes\n"<<min(n,p+1)<<" "<<max(n,p+1);
                    else cout<<"no";
                }
                else{
                    cout<<"yes\n"<<min(n,p+1)<<" "<<max(n,p+1);
                }
            }
            else cout<<"yes\n"<<min(p+1,q+1)<<" "<<max(p+1,q+1);
        }
    }
    else cout<<"no\n";
    return 0;
}