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
 
void solve(int pp){
    din di(k)
    V a(n);
    take(a,n);
    sort(all(a));
    // if(pp==35){
    //     string g="";
    //     g+=to_string(n);
    //     g+=to_string(k);
    //     repin{
    //         g+=to_string(a[i]);
    //     }
    //     cout<<g<<"\n";
    // }
    map<int,int>mp;
    set<int>s;
    repin{
        s.insert(a[i]);
        mp[a[i]]++;
    }
    int l=-1,r=-1;
    V b;
    for(auto i:s)b.push_back(i);
    // if(mp[b[0]]>=k)ans=1;
    int st=0;
    rep(i,0,b.size()){
        if(mp[b[i]]>=k){st=i;l=b[i];r=b[i];break;}
    }
    if(l==-1){
        cout<<-1<<"\n";return;
    }
    // ans++;
    // int temp=1;
    // int lt=l,rt=r;
    vector<V>x;
    V m;
    m.push_back(l);
    rep(i,st+1,b.size()){
        if(b[i]-b[i-1]==1){
            if(mp[b[i]]>=k){
                if(m.size()==0 && mp[b[i-1]]>=k){m.push_back(b[i-1]);m.push_back(b[i]);}
                else m.push_back(b[i]);
            }
            else{
                if(m.size()>0)x.push_back(m);
                m.clear();
            }
        }
        else{
            if(m.size()>0)x.push_back(m);
            m.clear();
        }
    }
    if(m.size()>0)x.push_back(m);
    int ans1=0;
    for(auto i:x){
        // for(auto j:i)cout<<j<<" ";
        // cout<<"  ";
        if(i.size()>ans1){
            ans1=i.size();
            l=i[0];r=i.back();
        }
    }
    // cout<<"\n";
    cout<<l<<" "<<r<<"\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    int a=1;
    while(t--){
        solve(a);
        a++;
    }
    return 0;
}