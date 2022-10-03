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
    din V a(n);
    take(a,n);
    if(n%2==1)cout<<"NO\n";
    else{
        sort(all(a));
        V b;
        b.push_back(a.back());
        rep(i,0,n/2){
            // swap(a[i],a[i+1]);
            // i++;
            b.push_back(a[i]);
            b.push_back(a[i+n/2]);
        }
        // repin b.push_back(a[i]);
        b.push_back(a[0]);
        bool ans =true;
        rep(i,1,n+1){
            if(!((b[i]>b[i-1] && b[i]>b[i+1]) || (b[i]<b[i-1] && b[i]<b[i+1])))ans=false;
        }
        if(ans){
            cout<<"YES\n";
            rep(i,1,n+1){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
            return;
        }
        cout<<"NO\n";
        // sort(all(a));
        // ans =true;
        // b.clear();
        // int i=0,j=n-1;
        // while(i<j){
        //     b.push_back(a[i]);
        //     b.push_back(a[j]);
        //     i++;j--;
        // }
        // V c;
        // c.push_back(b.back());
        // repin c.push_back(b[i]);
        // c.push_back(b[0]);
        // rep(i,1,n+1){
        //     if(!((c[i]>c[i-1] && c[i]>c[i+1]) || (c[i]<c[i-1] && c[i]<c[i+1])))ans=false;
        // }
        // if(ans){
        //     cout<<"YES\n";
        //     rep(i,1,n+1){
        //         cout<<c[i]<<" ";
        //     }
        //     cout<<"\n";
        //     return;
        // }
 
        // sort(all(a));
        // // cout<<"NO\n";
        // ans =true;
        // b.clear();
        // c.clear();
        // i=0,j=n-1;
        // while(i<j){
        //     b.push_back(a[j]);
        //     b.push_back(a[i]);
        //     i++;j--;
        // }
        // // V c;
        // c.push_back(b.back());
        // repin c.push_back(b[i]);
        // c.push_back(b[0]);
        // rep(i,1,n+1){
        //     if(!((c[i]>c[i-1] && c[i]>c[i+1]) || (c[i]<c[i-1] && c[i]<c[i+1])))ans=false;
        // }
        // if(ans){
        //     cout<<"YES\n";
        //     rep(i,1,n+1){
        //         cout<<c[i]<<" ";
        //     }
        //     cout<<"\n";
        //     return;
        // }
        // cout<<"NO\n";
    }
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