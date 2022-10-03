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
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
void solve(){
    din
    V a(n);
    repin cin>>a[i];
    V b(n);
    repin{
        b[i]=a[i]%2;
    }
    int one=count(all(b),1);
    int zero=count(all(b),0);
    if(abs(one-zero)>=2) cout<<"-1\n";
    else{
        int cnt=0;
        if(one+1==zero){
            int x=1;
            repin{
                if(b[i]==1){cnt+=(abs(i-x));x+=2;}
            }
            cout<<cnt<<'\n';
        }
        else if(one==zero+1){
            int x=1;
            repin{
                if(b[i]==0){cnt+=(abs(i-x));x+=2;}
            }
            cout<<cnt<<'\n';
        }
        else{
            int x=1,cnt1=0;
            repin{
                if(b[i]==1){cnt+=(abs(i-x));x+=2;}
            }
            x=0;
            repin{
                if(b[i]==1){cnt1+=(abs(i-x));x+=2;}
            }
            cout<<min(cnt,cnt1)<<'\n';
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