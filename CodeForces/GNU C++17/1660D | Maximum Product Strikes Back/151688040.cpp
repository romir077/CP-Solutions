#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
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
#define take(a,n) for(int j=0;j<n;j++) cin>>a[j];
#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
#define db double
#define MOD 1000000007
#define el cout<<endl;
using namespace std;
 
 
int power( int N, int m){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
    power = power * power;m = m >> 1;power%=MOD;}
    return sum%MOD;
}
 
int mod_inverse(int x){
    int result = 1;
    return power(x,MOD-2);
}
 
void solve(){
    din V a(n);
    take(a,n);
    V b;
    b.push_back(-1);
    pair<int,int>p;
    rep(i,0,n){
        if(a[i]==0)b.push_back(i);
    }
    b.push_back(n);
    int ans=INT_MIN;
    rep(i,0,b.size()-1){
        int temp=0,sign=0;
        rep(j,b[i]+1,b[i+1]){
            if(a[j]==-2 || a[j]==2)temp++;
            if(a[j]<0)sign++;
        }
        // cout<<temp<<" ";
        if(sign%2==0){
            if(temp>ans){
                if(b[i]+1+n-b[i+1]<=n)p={b[i]+1,n-b[i+1]};
                ans=temp;
            }
        }
        else{
            int temp1=0;
            rep(j,b[i]+1,b[i+1]){
                if(a[j]==2 || a[j]==-2)temp1++;
                if(a[j]<0){
                    if(temp-temp1>ans){
                        if(j+1+n-b[i+1]<=n)p={j+1,n-b[i+1]};
                        ans=temp-temp1;
                    }
                    break;
                }
            }
            // cout<<temp1<<" ";
            temp1=0;
            rrep(j,b[i+1]-1,b[i]+1){
                if(a[j]==2 || a[j]==-2)temp1++;
                if(a[j]<0){
                    if(temp-temp1>ans){
                        if(b[i]+1+n-j<=n)p={b[i]+1,n-j};
                        ans=temp-temp1;
                    }
                    break;
                }
            }
            // cout<<temp1<<" ";
        }
    }
    // if(b.size()==0){
 
    // }
    // else if(b.size()==1){
 
    // }
    cout<<p.first<<" "<<p.second<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}