#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;

signed main()
{
    din
    vpii arr(n),brr(n);
    V crr(n);
    repin{
        cin>>arr[i].first>>brr[i].first;
        arr[i].second=i;
        brr[i].second=i;
        crr[i]=arr[i].first+brr[i].first;
    }
    sort(all(arr));
    sort(all(brr));
    sort(all(crr));
    if(arr[0].second==brr[0].second){
        cout<<min(crr[0],min(max(arr[0].first,brr[1].first),max(arr[1].first,brr[0].first)))<<"\n";
    }
    else cout<<max(arr[0].first,brr[0].first)<<"\n";
    return 0;
}