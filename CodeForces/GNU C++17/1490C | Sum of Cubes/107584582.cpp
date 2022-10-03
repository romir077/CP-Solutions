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
    di(t)
    while(t--){
        din
        int x=floor(cbrt(n));
        int flag=0;
        for(int i=x;i>=1;i--){
            double y=cbrt(n-i*i*i);
            // cout<<y<<"\n";
            if(y==0){
                cout<<"NO\n";
                flag=1;
                break;
            }
            if(floor(y)==y){
                cout<<"YES\n";
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }
    }
    return 0;
}
 
 
 
 
 
            
            // for(int j=1;j<=x;j++){
            //     if((i*i*i)+(j*j*j)==n){
            //         cout<<"YES\n";
            //         flag=1;
            //         break;
            //     }
            //     else{ 
            //         continue;
            //     }
            // }
            // if(flag==1){
            //     break;
            // }