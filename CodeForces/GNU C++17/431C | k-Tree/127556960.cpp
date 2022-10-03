#include <iostream>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
const int mod = 1e9 + 7;
 
 
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
 
int dp[100][2];
 
void add(int &a, int b){
    a+=b;
    if(a>=mod) a-=mod;
}
 
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
signed main()
{
    din di(k) di(d)
    dp[0][0]=1;
    dp[0][1]=0; 
    rep(i,1,n+1){
        dp[i][0]=dp[i][1]=0;
        rep(j,1,k+1){
            if(i-j<0) break;
            if(j<d){
                add(dp[i][0],dp[i-j][0]);
                add(dp[i][1],dp[i-j][1]);
            }
            else{
                add(dp[i][1],dp[i-j][0]);
                add(dp[i][1],dp[i-j][1]);
            }
        }
    }
    cout<<dp[n][1]<<"\n";
    return 0;
}