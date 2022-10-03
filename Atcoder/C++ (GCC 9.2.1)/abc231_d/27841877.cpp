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

int parent(int x, vector<int>&y){
    if(y[x]==x)return x;
    else{
        int p=parent(y[x],y);
        y[x]=p;
        return p;
    } 
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    din di(m)
    map<int,unordered_set<int>>mp;
    vpii b(m);
    rep(i,0,m){
        dix diy
        b[i].first=x;
        b[i].second=y;
        mp[x].insert(y);
        mp[y].insert(x);
    }
    for(auto i:mp){
        if(i.second.size()>2){cout<<"No\n";return 0;}
    }
    V a(n+1,-1);
    rep(i,0,m){
        if(a[b[i].first]==-1 && a[b[i].second]==-1){
            a[b[i].first]=b[i].first;
            a[b[i].second]=b[i].first;
        }
        else if(a[b[i].first]==-1){
            a[b[i].first]=parent(b[i].second,a);
        }
        else if(a[b[i].second]==-1){
            a[b[i].second]=parent(b[i].first,a);
        }
        else{
            if(parent(b[i].first,a)==parent(b[i].second,a)){
                cout<<"No\n";
                return 0;
            }
            else{
                a[parent(b[i].first,a)]=parent(b[i].second,a);
                a[b[i].first]=a[b[i].second];
            }
        }
    }

    cout<<"Yes\n";
    return 0;
}