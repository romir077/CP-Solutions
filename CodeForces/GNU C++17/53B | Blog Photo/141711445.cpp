#include<bits/stdc++.h>
 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repit for(auto it=m.begin();it!=m.end();++it)
#define repin rep(i,0,n)
#define key ((*it).first)
#define val ((*it).second)
 #define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define dim di(m)
#define dik di(k)
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
// sort all(x) time complexity is nlogn
#define sis string s;
#define sin string s;cin>>s;
#define  f first
#define  sec second
//you dont want case sensitive
// toupper(x);
//tolower(x);
// find min or max of three nos= min({x,y,z})or max({x,y,z});
 
#define precise(i) cout<<fixed<<setprecision(i)
    
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
using namespace std;
int power(int a,int b){
    int x=1;
    while(b--) x*=a;
    return x;
}
 
void solve(){
    dia dib
    int x=power(2,floor(log2(a)));
    int y=power(2,floor(log2(b)));
    // cout<<x<<" "<<y<<"\n";
    // if(x>=y){
    //     b=pow(2,floor(log2(b)));
    // }
    // else{
    //     a=pow(2,floor(log2(a)));
    int h,w,ar=INT_MIN;
    int l=ceil(1.0*(double)y*0.8); //l=7
    int r=(1.0*(double)y*1.25); //r=9
    int m=ceil(1.0*((double)x)*(0.8)); //m=7
    int q=(1.0*((double)x)*((double)5/(double)4)); //q=10
    if(q>b){q=b;}
    if(r>a){r=a;}
    // cout<<l<<' '<<r<<" "<<m<<" "<<q<<"\n";
    // for(int i=l;i<=r;i++){
        // cout<<"i= "<<i<<" ";
        if(r>=l){
            if(r*y>ar){
                h=r;
                w=y;
                ar=h*w;
                // cout<<ar<<" "<<h<<" "<<w;
            }
            else if(r*y==ar && r>h){
                h=r;
                w=y;
                ar=r*y;
            }
        }
        // cout<<"\n";
    // }
    // for(int i=m;i<=q;i++){
        // cout<<"i= "<<i<<" ";
        if(q>=m){
            if(q*x>ar){
                w=q;
                h=x;
                ar=x*w;
                // cout<<ar<<" "<<h<<" "<<w;
            }
            else if(q*x==ar && x>h){
                h=x;
                w=q;
                ar=q*x;
            }
        }
        // cout<<"\n";
    // }
    
    
    cout<<h<<" "<<w;
 
 
    
 
 
}
 
 
signed main()
{
    IOS;
   {
        solve();
    }
    return 0;
}