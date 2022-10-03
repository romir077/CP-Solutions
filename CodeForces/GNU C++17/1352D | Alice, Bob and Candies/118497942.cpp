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
    int sum=0;
    repin cin>>a[i],sum+=a[i];
    int tot=a[0];
    int i=1,j=n-1;
    int al=a[0],bob=0,cnt=1;
    while(i<=j){
        if(cnt%2==0){
            if(i-1!=j) cnt++;
            while(bob>=al && i<=j){
                al+=a[i];
                tot+=a[i];
                i++;
            }
            bob=0;
        }
        if(cnt%2==1){
            if(i-1!=j) cnt++;
            while(bob<=al && i<=j){
                bob+=a[j];
                j--;
            }
            al=0;
        }
    }
    // if(cnt%2==0) j++;
    // if(cnt%2==1) i--;
    // rep(k,0,i+1) tot+=a[k];
    cout<<cnt<<" "<<tot<<" "<<sum-tot<<"\n";
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