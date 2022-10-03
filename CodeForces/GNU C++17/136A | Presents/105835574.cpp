#include<iostream>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    rep(i,n){
        cin>>arr[i];
        brr[arr[i]-1]=i+1;
    }
    rep(i,n-1){
        cout<<brr[i]<<" ";
    }
    cout<<brr[n-1];
    return 0;
}