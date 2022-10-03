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
using namespace std;
 
 
int power( int N, int M){
    int power = N, sum = 1;
    if(N == 0) sum = 0;
    while(M > 0){if((M & 1) == 1){sum *= power;}
    power = power * power;M = M >> 1;}
    return sum;
}
 
 
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sin
    dia dib dic
    dix diy diz
    di(rup)
    int p=count(all(s),'B');
    int q=count(all(s),'S');
    int r=count(all(s),'C');
    int ans=0;
    int cost=0;
    if(a<p)cost+=(p-a)*x;
    if(b<q)cost+=(q-b)*y;
    if(c<r)cost+=(r-c)*z;
    if(cost>rup){cout<<ans;return 0;}
    ans=1;
    while(1){
        cost=0;
        int h=ans*p;
        int i=ans*q;
        int j=ans*r;
        if(a<h)cost+=(h-a)*x;
        if(b<i)cost+=(i-b)*y;
        if(c<j)cost+=(j-c)*z;
        if(cost>rup){break;}
        ans*=2;
    }
    // cout<<ans;
    int l=1,right=ans;
    while(l<right){
 
        int mid=(l+right)/2;
        // cout<<mid;
        cost=0;
        int h=mid*p;
        int i=mid*q;
        int j=mid*r;
        if(a<h)cost+=(h-a)*x;
        if(b<i)cost+=(i-b)*y;
        if(c<j)cost+=(j-c)*z;
        if(cost>rup){
            right=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    l+=5;
    while(1){
        cost=0;
        int h=l*p;
        int i=l*q;
        int j=l*r;
        if(a<h)cost+=(h-a)*x;
        if(b<i)cost+=(i-b)*y;
        if(c<j)cost+=(j-c)*z;
        if(cost>rup){l--;}
        else break;
    }
    cout<<l;
 
 
    return 0;
}