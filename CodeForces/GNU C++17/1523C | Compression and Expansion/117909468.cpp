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
    din
    V a(n);
    repin cin>>a[i];
    V z;
    repin{
        if(i==0) {z.push_back(a[i]);cout<<z[i]<<"\n";}
        else {
            if(a[i]==1) {
                z.push_back(a[i]);
                rep(i,0,z.size()-1){
                    cout<<z[i]<<'.';
                }
                cout<<z[z.size()-1]<<"\n";
            }
            else{
                if(a[i]==a[i-1]+1){
                    z.pop_back();
                    z.push_back(a[i]);
                    rep(i,0,z.size()-1){
                        cout<<z[i]<<'.';
                    }
                    cout<<z[z.size()-1]<<"\n";
                }
                else{
                    int y=z.back();
                    while(a[i]!=z.back()+1) {z.pop_back();}
                    z.pop_back();
                    z.push_back(a[i]);
                    rep(i,0,z.size()-1){
                        cout<<z[i]<<'.';
                    }
                    cout<<z[z.size()-1]<<"\n";
                }
            }
        }
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