#include<iostream>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    rep(i,n){
        int a;
        cin>>a;
        int arr[a];
        int brr[2]={0,0};
        rep(k,a){
            cin>>arr[k];
            if(arr[k]==1){
                brr[0]+=1;
            }
            else{
                brr[1]+=1;
            }
        }
        int sum=0;
        rep(j,a){
            sum+=arr[j];
        }
        if(sum%2==1 || a==1 || (brr[0]==0 && brr[1]%2!=0)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}