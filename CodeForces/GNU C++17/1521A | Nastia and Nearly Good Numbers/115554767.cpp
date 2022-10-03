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
 
 
void solve(){
    di(a) di(b)
    if(b==1) cout<<"NO\n";
    else if(b==2){
        cout<<"YES\n";
        cout<<13*a<<" "<<3*a<<" "<<16*a<<"\n";
    }
    else{
        int k=2;
        while(1){
            if(k%b==0){k++;continue;}
            else{
                if(k*a==k*a*(b-1)) {k++;continue;}
                else break;
            }
        }
        cout<<"YES\n";
        cout<<k*a<<" "<<(k)*b*a-k*a<<" "<<k*a*b<<"\n";
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    di(t)
    while(t--){
        solve();
    }
    return 0;
}