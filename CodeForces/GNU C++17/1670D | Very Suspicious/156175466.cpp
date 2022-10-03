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
 
// void solve(){
//     din
 
// }
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    vector<int>ans(200001,0);
    vector<int>p(200001,0);
    p[1]=0;
    p[2]=2;
    p[3]=6;
    int l1=1,l2=1,l3=1;
    rep(i,4,200001){
        p[i]=p[i-1];
        if(i%3==1){
            l1++;
            p[i]+=2*(l2+l3);
        }
        else if(i%3==2){
            l2++;
            p[i]+=2*(l1+l3);
        }
        else{
            l3++;
            p[i]+=2*(l2+l1);
        }
    }
    
 
    // ans[2]=2;
    // ans[3]=6;
    // ans[4]=8;
    // rep(i,5,200001){
    //     int x=((i+1)+1)/2;
    //     if(x%2==1)x++;
    //     int y=x/2;
    //     int z=i-x;
    //     int tot=y*y;
    //     int six=0;
    //     if(z>0){six+=y;z--;}
    //     if(z%2==0){
    //         z/=2;
    //         y--;
    //         int sum2=((y)*(y+1))/2;
    //         y-=z;
    //         int sum=((y)*(y+1))/2;
    //         six+=(sum2-sum)*2;
    //     }
    //     else{
    //         z--;
    //         z/=2;
    //         y--;
    //         int sum2=((y)*(y+1))/2;
    //         y-=z;
    //         int sum=((y)*(y+1))/2;
    //         six+=(sum2-sum)*2;
    //         six+=y;
    //     }
    //     ans[i]=six*6+(tot-six)*2;
    // }
    // give(ans,90);
    // cout<<"\n";
    // give(p,90);
    // cout<<"\n";
    while(t--){
        din
        int final=lower_bound(all(p),n)-p.begin();
        cout<<final<<"\n";
    }
    return 0;
}