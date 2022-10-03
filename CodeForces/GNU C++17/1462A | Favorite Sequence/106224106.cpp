#include<iostream>
#include<cmath>
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
using namespace std;
 
signed main()
{
    din
    rep(i,n){
        dix
        int arr[x],brr[x];
        rep(j,x){
            cin>>arr[j];
        }
        if(x%2==0){
            rep(j,x){
                if(j<x/2){
                    brr[2*j]=arr[j];
                }
                else{
                    brr[2*x-2*j-1]=arr[j];
                }
            }
        }
        else{
            rep(j,x){
                if(j<(x/2)+1){
                    brr[2*j]=arr[j];
                }
                else{
                    brr[2*x-2*j-1]=arr[j];
                }
            }
        }
        rep(i,x-1){
            cout<<brr[i]<<" ";
        }
        cout<<brr[x-1];
        cout<<endl;
    }
    return 0;
}   