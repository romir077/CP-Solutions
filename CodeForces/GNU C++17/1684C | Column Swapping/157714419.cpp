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
    din di(m)
    vector<V>a(n,V(m));
    repin{
        rep(j,0,m){
            cin>>a[i][j];
        }
    }
    if(m==1)cout<<"1 1\n";
    else{
            V t;
        repin{
            V b=a[i];
            sort(all(b));
            if(a[i]==b)continue;
            else{
                rep(j,0,m){
                    if(a[i][j]!=b[j])t.push_back(j);
                }
                break;
            }
        }
        if(t.size()>2 || t.size()==1){cout<<"-1\n";return;}
        if(t.size()==0){cout<<"1 1\n";return;}
        vector<V>b=a;
        repin{
            sort(all(b[i]));
        }
        repin{
            swap(a[i][t[0]],a[i][t[1]]);
        }
        if(b==a)cout<<t[0]+1<<" "<<t[1]+1<<"\n";
        else cout<<"-1\n";
        // vector<V>b=a;
        // // vector<V>c=a;
        // repin{
        //     sort(all(b[i]));
        // }
        
        // V p;
        // vector<V> q;
        // rep(i,0,n){
        //     int temp=0;
        //     vector<int>t;
        //     rep(j,0,m){
        //         if(b[i][j]!=a[i][j]){temp++;t.push_back(i);}
        //     }
        //     if(temp!=0){p.push_back(temp);q.push_back(t);}
        // }
        // // cout<<"adc";
        // for(auto i:)
        // rep(i,0,(int)p.size()-1){
        //     if(p[i]!=p[i+1] || p[i]!=2){cout<<"-1\n";return;}
        //     if(q[i]!=q[i+1]){cout<<"-1\n";return;}
        // }
        // if(p.size()==0){cout<<"1 1\n";return;}
        // repin{
        //     if(a[i][q[0][0]]<a[i][q[0][1]]){cout<<"-1\n";return;}
        // }
        // cout<<q[0][0]<<" "<<q[0][1]<<"\n";
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