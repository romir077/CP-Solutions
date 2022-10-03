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
    vector <string> arr(n);
    repin cin>>arr[i];
    vector <int> brr;
    rep(i,0,n){
        rep(j,0,n){
            if(arr[i][j]=='.') continue;
            else {brr.push_back(i);brr.push_back(j);}
        }
    }
    if(brr[0]==brr[2]){
        if(brr[0]==n-1){
            rep(l,0,n-2){cout<<arr[l]<<"\n";}
            rep(k,0,n){
                if(k==brr[1] || k==brr[3]) cout<<'*';
                else cout<<'.';
            }
            cout<<"\n";
            cout<<arr[n-1]<<"\n";
        }
        else{
            rep(l,0,brr[0]+1){cout<<arr[l]<<"\n";}
            rep(k,0,n){
                if(k==brr[1] || k==brr[3]) cout<<'*';
                else cout<<'.';
            }
            cout<<"\n";
            rep(l,brr[0]+2,n){cout<<arr[l]<<"\n";}
        }
    }
    else if(brr[1]==brr[3]){
        if(brr[1]==n-1){
            rep(l,0,n){
                if(l==brr[0] || l==brr[2]){
                    rep(i,0,n-2) cout<<'.';
                    cout<<"**\n";
                }
                else cout<<arr[l]<<"\n";
            }
        }
        else{
            rep(l,0,n){
                if(l==brr[0] || l==brr[2]){
                    rep(k,0,n){
                        if(k==brr[1] || k==brr[1]+1) cout<<'*';
                        else cout<<'.';
                    }
                    cout<<"\n";
                }
                else cout<<arr[l]<<"\n";
            }
        }
    }
    else {
        rep(l,0,n){
            if(l==brr[0] || l==brr[2]){
                rep(i,0,n){
                    if(i==brr[3] || i==brr[1]) cout<<'*';
                    else cout<<'.'; 
                }
                cout<<"\n";
            }
            else cout<<arr[l]<<"\n";
        }
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