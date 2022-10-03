#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    dia dib
    string arr[a];
    rep(i,a){
        cin>>arr[i];
    }
    int count=0,row=0,col=0;
    rep(i,a){
        int flag=0;
        rep(j,b){
            if(arr[i][j]=='S'){
            flag=1;
            break;
        }
        }
        if(flag==0) {count+=b;row++;} 
    }
    rep(i,b){
        int flag=0;
        rep(j,a){
            if(arr[j][i]=='S'){
            flag=1;
            break;
            }
        }
        if(flag==0) {count+=a;col++;} 
    }
    cout<<count-(col*row);
    return 0;
}