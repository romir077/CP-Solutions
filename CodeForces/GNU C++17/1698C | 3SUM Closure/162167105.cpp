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
 
void solve(){
    di(n1) V a(n1);
    take(a,n1);
    sort(all(a));
    int n=0,z=0,p=0;
    rep(i,0,n1){
        if(a[i]<0)n++;
        if(a[i]==0)z++;
        if(a[i]>0)p++;
    }
    if(p+n==0){
        cout<<"YES\n";return;
    }
    else if(p+n==1){
        cout<<"YES\n";return;
    }
    else if(p+n==2){
        if(p==2 || n==2){cout<<"NO\n";return;}
        else{
            if(a[0]!=-1*a.back()){cout<<"NO\n";return;}
            else {cout<<"YES\n";return;}
        }
    }
    else if(p+n==3){
        if(p==0){cout<<"NO\n";return;}
        if(p==1){
            if(n1>3){cout<<"NO\n";return;}
            else{
                int x=a[0]+a[1]+a[2];
                if(x==a[0] || x==a[1] || x==a[2]){cout<<"YES\n";return;}
                else {cout<<"NO\n";return;}
            }
        }
        if(p==2){
            if(n1>3){cout<<"NO\n";return;}
            else{
                int x=a[0]+a[1]+a[2];
                if(x==a[0] || x==a[1] || x==a[2]){cout<<"YES\n";return;}
                else {cout<<"NO\n";return;}
            }
 
        }
        if(p==3){
            {cout<<"NO\n";return;}
        }
    }
    else if(p+n==4){
        if(p==2 && n==2){
            if(n1>4){cout<<"NO\n";return;}
            else{
                rep(i,0,n1){
                    rep(j,0,n1){
                        rep(k,0,n1){
                            if(i!=j && j!=k && k!=i){
                                int x=a[i]+a[j]+a[k];
                                int f=1;
                                rep(l,0,n1){
                                    if(a[l]==x)f=0;
                                }
                                if(f){cout<<"NO\n";return;}
                            }
                        }
                    }
                }
                cout<<"YES\n";
            }
        }
        else cout<<"NO\n";
    }
    else {cout<<"NO\n";return;}
    // if(p==0 && n==0){cout<<"YES\n";return;}
    // if(p==1 && n==0){cout<<"YES\n";return;}
    // if(p==0 && n==1){cout<<"YES\n";return;}
    // if(p==1 && n==1 && a[0]==a.back()){cout<<"YES\n";return;}
    // if(p==1 && n==1 && a[0]!=a.back()){cout<<"NO\n";return;}
    // if(n1==3){
    //     int x=a[0]+a[1]+a[2];
    //     if(x==a[0] || x==a[1] || x==a[2]){cout<<"YES\n";return;}
    //     else {cout<<"NO\n";return;}
    // }
    // if(p>1 && p+z>=3){cout<<"NO\n";return;}
    // if(n>1 && n+z>=3){cout<<"NO\n";return;}
    // rep(i,0,n1){
    //     rep(j,0,n1){
    //         rep(k,0,n1){
    //             if(i!=j && j!=k && k!=i){
    //                 int x=a[i]+a[j]+a[k];
    //                 int f=1;
    //                 rep(l,0,n1){
    //                     if(a[l]==x)f=0;
    //                 }
    //                 if(f){cout<<"NO\n";return;}
    //             }
    //         }
    //     }
    // }
    // cout<<"YES\n";
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