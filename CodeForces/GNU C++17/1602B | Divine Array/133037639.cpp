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
    din
    V a(n);
    map<int,vector<int>> x;
    map<int,int> m;
    repin{
        cin>>a[i];
        x[0].push_back(a[i]);
        m[a[i]]++;  
    }
 
    int q;
    cin>>q;
    V l(q),z(q);
    rep(i,0,q){
        cin>>z[i]>>l[i];
    }
  
    int k=0;
    bool f=false;
    while(f==false){
        repin{
            a[i]=m[a[i]];
            x[k+1].push_back(a[i]);
        }
        k++;
        
        m.clear();
        repin{
            m[a[i]]++;
        }
        f=true;
        for(auto &pr:m){
            if(pr.first!=pr.second){
                f=false;
            }
        }
        // cout<<"i";
    }
    // for(auto i:x){
    //     cout<<i.first<<"\n";
    //     rep(j,0,i.second.size()){
    //         cout<<i.second[j]<<" ";
    //     }
    //     cout<<endl;
    // }
    repin{
        a[i]=m[a[i]];
    }
    for(int i=0;i<q;i++){
        
        if(l[i]<x.size()){
          cout<< x[l[i]][z[i]-1]<<endl;
        }
        else{
            cout<<a[z[i]-1]<<endl;
        }
    }
    
 
    
 
 
}
 
 
int32_t main()
{
    IOS;
    di(t)
    while(t--){
        solve();
    }
    return 0;
}