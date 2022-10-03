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
    #define precise(i) cout<<fixed<<setprecision(i)
    #define V vector<int>
    #define vpii vector<pair<int,int>>
    #define all(x) x.begin(),x.end()
    #define si(s) string s;cin>>s;
    using namespace std;
 
    signed main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        din di(m) di(q)
        si(s) si(t)
        V a(n,0);
        rep(i,0,n-m+1){
            int f=0;
            rep(j,0,m){
                if(s[i+j]!=t[j]) {f=1;break;}
            }
            if(f==0) a[i]=1;
        }
        int pre[n]={};
        pre[0]=a[0];
        rep(i,1,n){
            pre[i]=pre[i-1]+a[i];
        }
        int las[n]={};
        rep(i,m-1,n){
            las[i]=pre[i-m+1];
        }
        // rep(i,0,n) cout<<pre[i]<<" ";
        // cout<<"\n";
        // rep(i,0,n) cout<<las[i]<<" ";
        cout<<"\n";
        rep(i,0,q){
            dix diy
            if(las[y-1]-pre[x-2]>=0 && x>1) cout<<las[y-1]-pre[x-2]<<"\n";
            else if(x==1) cout<<las[y-1]<<"\n";
            else cout<<0<<"\n";
 
        }
        return 0;
    }