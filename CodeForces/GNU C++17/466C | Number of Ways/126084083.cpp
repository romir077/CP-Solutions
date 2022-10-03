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
    din V a(n);
    int sum=0;
    repin {cin>>a[i];sum+=a[i];}
    if(sum%3!=0) cout<<"0\n";
    else{
        V b,c;
        int x=0,y=0,z=sum/3;
        repin{
            x+=a[i];
            if(x==z && i!=n-1) b.push_back(i+1);
        }
        for(int i=n-1;i>=0;i--){
            y+=a[i];
            if(y==z && i!=0) c.push_back(i+1);
        }
 
        int sz=c.size();
        int ans=0;
        rep(i,0,sz){
            ans+=distance(b.begin(),lower_bound(all(b),c[i]-1));
        }
        // cout<<end[i]<<" "<<ans<<"\n";
        cout<<ans<<"\n";
    }
 
        // sort(all(c));
        // int h=c.size(),k=b.size();
        // vector<int>::iterator lower;
        // int tot=0;
        // rep(i,0,k){
        //     lower=lower_bound(all(c),b[i]);
        //     if(c[lower-c.begin()]==b[i] && b[i]!=z) continue;
        //     else tot+=(h-(lower-c.begin()));
        // }
        // if(z==0) cout<<(h*(h-1))/2<<"\n";
        // else cout<<tot<<"\n";
    // }
 
    return 0;
}