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
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    din di(k)
    sin
    V b(n,0);
    V a(n,0);
    if(n%2==0){
        for(int i=n/2-1,j=n/2;i>=0,j<n;i--,j++){
            a[i]=min(abs((int)(s[i]-s[j])),26-abs((int)(s[i]-s[j])));
            a[j]=min(abs((int)(s[i]-s[j])),26-abs((int)(s[i]-s[j])));
        }
        // repin cout<<a[i]<<" ";
        // cout<<endl;
        if(k>n/2)k=n+1-k;
        k--;
        int ans=0;
        rep(i,0,n/2)ans+=a[i];
        int x=0,y=n/2-1;
        while((a[x]==0 || a[y]==0) && x<n && y>=0){
            if(a[x]==0)x++;
            if(a[y]==0)y--;
        }
        int z=0;
        if(k>=y && k>=x)z=k-x;
        else if(k<=x && k<=y)z=y-k;
        else{
            z=min(y-x+y-k,y-x+k-x);
        }
        ans+=z;
        if(a==b)cout<<"0\n";
        else cout<<ans<<"\n";
    }
    else{
        for(int i=n/2-1,j=n/2+1;i>=0,j<n;i--,j++){
            a[i]=min(abs((int)(s[i]-s[j])),26-abs((int)(s[i]-s[j])));
            a[j]=min(abs((int)(s[i]-s[j])),26-abs((int)(s[i]-s[j])));
        }
        if(k>n/2)k=n+1-k;
        k--;
        int ans=0;
        rep(i,0,n/2)ans+=a[i];
        int x=0,y=n/2;
        while((a[x]==0 || a[y]==0) && x<n && y>=0){
            if(a[x]==0)x++;
            if(a[y]==0)y--;
        }
        int z=0;
        if(k>=y && k>=x)z=k-x;
        else if(k<=x && k<=y)z=y-k;
        else{
            z=min(y-x+y-k,y-x+k-x);
        }
        ans+=z;
        if(a==b)cout<<"0\n";
        else cout<<ans<<"\n";
    }
    return 0;
}