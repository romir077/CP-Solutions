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
    din
    V a(n);
    take(a,n);
    di(m)
    int sum=0;
    repin sum+=a[i];
    sort(all(a));
    vector<int> :: iterator it;
    rep(i,0,m){
        dix diy
        int z=0;
        it=lower_bound(all(a),x);
        // if(it==a.end()) {
        //     z+=x-a.back();
        //     z+=((y-(sum-a.back())>=0)?y-(sum-a.back()):0);
        // }
        if(it==a.begin()){
            z=((y-(sum-a[0])>=0)?y-(sum-a[0]):0);
 
        }
        else{
            int u=0,w=0;
            if(it==a.end())it--;
            u+=max((int)0,x-*it);
            u+=((y-(sum-*it)>=0)?y-sum+*it:0);
            it--;
            w+=max((int)0,x-*it);
            w+=((y-sum+*it>=0)?y-sum+*it:0);
            z=min(u,w);
            // cout<<u<<" "<<w<<" ";
        }
        
        cout<<z<<"\n";
    }
 
    return 0;
}