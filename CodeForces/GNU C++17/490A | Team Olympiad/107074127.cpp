#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    dia 
    int arr[a];
    vector <int>x,y,z;
    rep(i,a){
        cin>>arr[i];
        if(arr[i]==1) x.push_back(i+1);
        if(arr[i]==2) y.push_back(i+1);
        if(arr[i]==3) z.push_back(i+1);
    }
    int p=min(min(x.size(),y.size()),z.size());
    cout<<p<<"\n";
    rep(i,p){
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
    return 0;
}