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
 
void solve(){
    din di(m)
    vector <string> arr(n);
    repin cin>>arr[i];
    int a=-1,b=-1;
    repin{
        rep(j,0,m){
            if(arr[i][j]!='.'){
                a=i,b=j;
                goto x;
            }
        }
    }
    x:;
    if(a==-1 && b==-1){
        cout<<"YES\n";
        int x=1;
        repin{
            rep(j,0,m){
                if((i+j)%2==x) cout<<'R';
                else cout<<'W';
            }
            cout<<"\n";
        }
        return;
    }
    else{
        int f=0;
        if(arr[a][b]=='R') f=1;
        if(arr[a][b]=='W') f=2;
        int x=(a+b)%2;
        repin{
            rep(j,0,m){
                if(arr[i][j]!='.' && f==1){
                    if((i+j)%2==x && arr[i][j]!='R') {cout<<"NO\n";return;}
                    if((i+j)%2!=x && arr[i][j]=='R') {cout<<"NO\n";return;}
                }
                if(arr[i][j]!='.' && f==2){
                    if((i+j)%2==x && arr[i][j]!='W') {cout<<"NO\n";return;}
                    if((i+j)%2!=x && arr[i][j]=='W') {cout<<"NO\n";return;}
                }
            }
        }
        cout<<"YES\n";
        x=(a+b)%2;
        repin{
            rep(j,0,m){
                if((i+j)%2==x && f==1) cout<<'R';
                if((i+j)%2==x && f==2) cout<<'W';
                if((i+j)%2!=x && f==1) cout<<'W';
                if((i+j)%2!=x && f==2) cout<<'R';
                // else cout<<'W';
            }
            cout<<"\n";
        }
        return;
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