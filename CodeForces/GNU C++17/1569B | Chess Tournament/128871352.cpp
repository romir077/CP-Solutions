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
#define db double
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
    sin
    char arr[n][n];
    if(count(all(s),'2')==1)cout<<"NO\n";
    else if(count(all(s),'2')==2){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        repin{
            rep(j,0,n){
                if(i==j)arr[i][i]='X';
            }
        }
        rep(i,1,n){
            rep(j,0,i){
                if(s[i]=='2' && s[j]=='2')arr[i][j]='+';
                else arr[i][j]='=';
            }
        }
        rep(i,0,n-1){
            rep(j,i+1,n){
                if(s[i]=='2' && s[j]=='2')arr[i][j]='-';
                else arr[i][j]='=';
            }
        }
        int x=0,y=0;
        rep(i,0,n)if(s[i]=='2'){x=i;break;}
        for(int i=n-1;i>=0;i--)if(s[i]=='2'){y=i;break;}
        // int a=0,b=0;
        // for(int i=n-1;i>=0;i--)if(arr[x][i]=='-'){a=i;break;}
        // rep(i,0,n)if(arr[y][i]=='+'){b=i;break;}
        swap(arr[x][y],arr[y][x]);
        repin{
            rep(j,0,n){
                cout<<arr[i][j];
            }
            cout<<"\n";
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