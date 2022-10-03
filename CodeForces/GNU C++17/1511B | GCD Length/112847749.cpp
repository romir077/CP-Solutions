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
    dia dib dic
    int arr[9]={3,11,101,1009,10007,100003,1000003,10000019,100000007};
 
        int x=(ceil((double)pow(10,a-1)/(double)arr[c-1]))*(arr[c-1]);
        int y=(ceil((double)pow(10,b-1)/(double)arr[c-1]))*(arr[c-1]);
        int p=max(x,y);
        int q=min(x,y);
        if(__gcd(x,y)==arr[c-1]) cout<<x<<" "<<y<<"\n";
        else{
            while(__gcd(p,q)!=arr[c-1]){
                p+=arr[c-1];
                // cout<<x<<" "<<y<<"\n";
            }
            if(a>b) cout<<p<<" "<<q<<"\n";
            else cout<<q<<" "<<p<<"\n";
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