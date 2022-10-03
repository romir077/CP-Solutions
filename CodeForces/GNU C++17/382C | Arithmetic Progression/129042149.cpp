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
    if(n==1){cout<<"-1\n";}
    else{
        sort(all(a));
        set<int>s;
        map<int,int>mp;
        int x;
        rep(i,0,n-1){
            // if(s.size()==1 && s.find(a[i+1]-a[i])==s.end())x=a[i];
            s.insert(a[i+1]-a[i]);
            mp[a[i+1]-a[i]]++;
        }
        set<int> :: iterator itr;
        itr=s.begin();
        if(s.size()==1){    
            if(*s.begin()==0){
                cout<<"1\n"<<a[0];
            }
            else{
                if(n==2 && (a[0]+a[1])%2==0){
                    cout<<"3\n";
                    cout<<a[0]-*itr<<" "<<(a[0]+a[1])/2<<" "<<a.back()+*itr<<"\n";
                }
                else{
                    cout<<"2\n";
                    cout<<a[0]-*itr<<" "<<a.back()+*itr<<"\n";
                }
            }
        }
        else if(s.size()==2){
            // cout<<*(++itr)<<" ";
            // cout<<mp[*(--s.end())]<<" ";
            if(mp[*(--s.end())]==1){
                rep(i,0,n-1){
                    if(a[i+1]-a[i]==*(--s.end())){x=a[i];break;}
                }
                if(*s.begin()==0)cout<<"0\n";
                else if(*(--s.end())!=2*(*s.begin()))cout<<"0\n";
                else cout<<"1\n"<<x+*s.begin();
            }
            else cout<<"0\n";
        }
        else cout<<"0\n";
    }
    return 0;
}