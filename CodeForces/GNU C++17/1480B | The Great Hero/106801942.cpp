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
#define db double
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    int n;cin>>n;
    rep(i,n){
        di(A) di(B) int N;cin>>N;
        int a[N],b[N];
        int amax=0;
        rep(j,N){
            cin>>a[j];
            if(a[j]>amax){
                amax=a[j];
            }
        }
        rep(j,N){
            cin>>b[j];
        }
        int G=0;
        rep(j,N){
            int H=0;
            H=ceil((double)b[j]/(double)A);
            G+=H*a[j];
        }
        if(B>=G){
            cout<<"YES\n";
        }
        else{
            if((G-B)<amax){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
    // if(B<=G){
    //                 cout<<"NO\n";
    //                 break;
    //             }
    //         }
    //         else{
    //             db X=B-G;
    //             db Z=ceil(b[j]/A);
    //             X=X-(Z*a[j]);
    //             if(X>=0){
    //                 cout<<"YES\n";
    //                 break;
    //             }
    //             else{
    //                 if(abs(X)<a[j]){
    //                     cout<<"YES\n";
    //                     break;
    //                 }
    //                 else{
    //                     cout<<"NO\n";
    //                     break;
    //                 }
    //             }
    //         }