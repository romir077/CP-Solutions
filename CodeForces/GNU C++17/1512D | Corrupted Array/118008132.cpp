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
    din
    int sum=0,f=0,g=0,x,y;
    V a(n+2);
    map <int,int> freq;
    rep(i,0,n+2) {cin>>a[i];sum+=a[i];freq[a[i]]++;}
    rep(i,0,n+2){
        if((sum-a[i])%2==1) continue;
        else {
            // cout<<i<<endl;
            if(freq[(sum-a[i])/2]>=2){
                f=1,x=i;
                break;
            }
            else if(freq[(sum-a[i])/2]==1 && (sum-a[i])/2!=a[i]){
                // cout<<i<<"h"<<endl;
                f=1,x=i;
                break;
            }
            else continue;
        }
    }
        if(f==0) cout<<"-1\n";
        else{
            rep(j,0,n+2){
                    if(j==x) {continue;}
                    if(a[j]==(sum-a[x])/2 && g==0) {g=1;continue;}
                    else cout<<a[j]<<" ";
                }
                cout<<"\n";
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