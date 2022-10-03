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
    din di(x)
    V a(n);
    int sum=0;
    V b(n);
    repin {cin>>a[i];sum+=a[i];}
    if(n==1){
        if(a[0]==x) cout<<"NO\n";
        else cout<<"YES\n"<<a[0]<<"\n";
    }
    else{
        sort(all(a));
        b[0]=a[0];
        rep(i,1,n){
            b[i]=a[i]+b[i-1];
        }
        int flag=0;
        rep(i,0,n){
            if(b[i]==x){
                if(i!=n-1) {swap(a[i],a[i+1]);flag=2;break;}
                else {cout<<"NO\n";flag=3;break;}
            }
            else{
                flag=1;
            }
        }
        if(flag==2 || flag==1) {cout<<"YES\n"; repin cout<<a[i]<<" ";cout<<"\n";}
 
    }
}
 
signed main()
{
    di(t)
    while(t--){
        solve();
    }
    return 0;
}