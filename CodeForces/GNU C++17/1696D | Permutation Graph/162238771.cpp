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
int ans;
V a;
V pre1,pre2,suf1,suf2;
void f(int l,int r,int n){
    if(l==r)return;
    if(l==0 && r==n-1){
        if(pre2[n-1]==n-1){
            if(a[r-1]<a[r]){
                ans++;
                f(0,pre1[r],n);
            }
            else{
                ans++;
                f(0,pre2[r],n);
            }
        }
        else{
            if(a[l+1]<a[l]){
                ans++;
                f(suf1[l],n-1,n);
            }
            else{
                ans++;
                f(suf2[l],n-1,n);
            }
        }
        return;
    }
    if(l==0){
        if(a[r-1]<a[r]){
            ans++;
            f(0,pre1[r],n);
        }
        else{
            ans++;
            f(0,pre2[r],n);
        }
    }
    if(r==n-1){
        if(a[l+1]<a[l]){
            ans++;
            f(suf1[l],n-1,n);
        }
        else{
            ans++;
            f(suf2[l],n-1,n);
        }
    }
}
void solve(){
    din 
    a=vector<int>(n);
    take(a,n);
    if(n==1){cout<<"0\n";return;}
    map<int,int>mp;
    repin{
        mp[a[i]]=i;
    }
    pre1=vector<int>(n);
    pre2=vector<int>(n);
    suf2=vector<int>(n);
    suf1=vector<int>(n);
    pre1[0]=a[0];
    suf1[n-1]=a[n-1];
    pre2[0]=a[0];
    suf2[n-1]=a[n-1];
    rep(i,1,n){
        pre1[i]=min(pre1[i-1],a[i]);
    }
    rep(i,1,n){
        pre2[i]=max(pre2[i-1],a[i]);
    }
    rrep(i,n-2,0){
        suf1[i]=min(suf1[i+1],a[i]);
    }
    rrep(i,n-2,0){
        suf2[i]=max(suf2[i+1],a[i]);
    }
    repin pre1[i]=mp[pre1[i]];
    repin pre2[i]=mp[pre2[i]];
    repin suf1[i]=mp[suf1[i]];
    repin suf2[i]=mp[suf2[i]];
    // give(pre1,n);cout<<"\n";
    // give(pre2,n);cout<<"\n";
    // give(suf1,n);cout<<"\n";
    // give(suf2,n);cout<<"\n";
    ans=0;
    f(0,pre2[n-1],n);
    f(pre2[n-1],n-1,n);
    cout<<ans<<"\n";
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