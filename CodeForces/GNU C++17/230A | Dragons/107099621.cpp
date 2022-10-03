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
#define din di(n)
#define db double
#define all(x) x.begin(),x.end()
using namespace std;
signed main()
{
    di(s) din
    vector <pair<int , int >> x(n);
    rep(i,n){
        cin>>x[i].first>>x[i].second;
    }
    sort(all(x));
    rep(i,n){
        if(x[i].first<s){
            s+=x[i].second;
            continue;
        }
        else{cout<<"NO\n";return 0;}
    }
    cout<<"YES\n";
    return 0;
}