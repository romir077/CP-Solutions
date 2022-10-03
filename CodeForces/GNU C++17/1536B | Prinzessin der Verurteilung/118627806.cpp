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
    sin
    V arr(26,0);
    rep(i,0,n){
        arr[s[i]-97]++;
    }
    if(count(all(arr),0)!=0){
        rep(i,0,26){
            if(arr[i]==0){cout<<(char)(i+97)<<"\n";break;}
        }
    }
    else{
        V brr(26*26,0);
        rep(i,0,n-1){
            brr[26*(s[i]-97)+s[i+1]-97]++;
        }
        if(count(all(brr),0)!=0){
            rep(i,0,26*26){if(brr[i]==0){cout<<(char)(i/26+97)<<(char)((i%26)+97)<<"\n";break;}}
        }
        else{
            V brr(26*26*26,0);
            rep(i,0,n-2){
                brr[26*26*(s[i]-97)+26*(s[i+1]-97)+(s[i+2]-97)]++;
            }
            if(count(all(brr),0)!=0){
                rep(i,0,26*26*26){if(brr[i]==0){cout<<(char)((i/(26*26))+97)<<(char)((i-(i/(26*26)))/26+97)<<(char)(((i-(i/(26*26)))%26)+97)<<"\n";break;}}
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