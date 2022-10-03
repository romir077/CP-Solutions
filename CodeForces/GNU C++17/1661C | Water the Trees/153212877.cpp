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
    din
    V a(n);
    take(a,n);
    sort(all(a),greater<int>());
    // multiset<int,greater<int>>pq;
    V pq;
    repin{
        if(a[i]!=a[0])pq.push_back(a[0]-a[i]);
    }
    int ans=LONG_LONG_MAX,ans2=LONG_LONG_MAX;
    int od=0,ev=0;
    for(auto i:pq){
        if(i%3==0){
            od+=i/3;
            ev+=i/3;
        }
        else if(i%3==1){
            od+=i/3+1;
            ev+=i/3;
        }
        else{
            od+=i/3;
            ev+=i/3+1;
        }
    }
    if(od>ev){
        ans=min(ans,od*2-1);
    }
    else{
        ans=min(ans,ev*2);
    }
    pq.clear();
    od=0,ev=0;
    repin{
        pq.push_back(a[0]+1-a[i]);
    }
    for(auto i:pq){
        if(i%3==0){
            od+=i/3;
            ev+=i/3;
        }
        else if(i%3==1){
            od+=i/3+1;
            ev+=i/3;
        }
        else{
            od+=i/3;
            ev+=i/3+1;
        }
    }
    if(od>ev){
        ans2=min(ans2,od*2-1);
    }
    else{
        ans2=min(ans2,ev*2);
    }
    int ans3=LONG_LONG_MAX;
    od=0,ev=0;
    V c;
    repin{
        // c.push_back(a[0]-a[i]);
        if((a[0]-a[i])%2==1){
            od++;
            ev+=(a[0]-a[i])/2;
        }
        else{
            ev+=(a[0]-a[i])/2;
        }
    }
    if(ev<od){
        ans3=min(ans3,2*od-1);
    }
    else{
        if((ev-od)%3==0){
            int p=(ev-od)/3;
            ev-=p;
            od+=2*p;
        }
        else if((ev-od)%3==1){
            int p=(ev-od)/3;
            ev-=p;
            od+=2*p;
        }
        else{
            int p=(ev-od)/3+1;
            ev-=p;
            od+=2*p;
        }
        if(ev>=od)ans3=min(ans3,2*ev);
        else{
            ans3=min(ans3,2*od-1);
        }
    }
    c.clear();od=0;ev=0;
    repin{
        // c.push_back(a[0]-a[i]);
        if((a[0]+1-a[i])%2==1){
            od++;
            ev+=(a[0]+1-a[i])/2;
        }
        else{
            ev+=(a[0]+1-a[i])/2;
        }
    }
    if(ev<od){
        ans3=min(ans3,2*od-1);
    }
    else{
        if((ev-od)%3==0){
            int p=(ev-od)/3;
            ev-=p;
            od+=2*p;
        }
        else if((ev-od)%3==1){
            int p=(ev-od)/3;
            ev-=p;
            od+=2*p;
        }
        else{
            int p=(ev-od)/3+1;
            ev-=p;
            od+=2*p;
        }
        if(ev>=od)ans3=min(ans3,2*ev);
        else{
            ans3=min(ans3,2*od-1);
        }
    }
    
    // cout<<ans<<" "<<ans2<<" "<<ans3<<" ";
    cout<<min({ans,ans2,ans3})<<"\n";
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