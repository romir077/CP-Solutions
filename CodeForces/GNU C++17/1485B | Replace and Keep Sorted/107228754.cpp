#include<bits/stdc++.h>
#include<iostream>
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
 
void preCompute(int arr[], int n, int pre[],int k)
{
    for(int i=0;i<n;i++){
        if(i==0){
            int temp=arr[i+1]-2;
            pre[i]=(temp>0)?temp:0;
        }else if(i==n-1){
            int temp=k+1-arr[i-1]-2;
            pre[i]=(temp>0)?temp:0;
        }else{
        int temp=arr[i+1]-arr[i-1]-2;
        pre[i]=(temp>0)?temp:0;
        }
    }
}
 
int rangeSum(int i, int j, int pre[])
{
    int sum=0;
    for(int a=i;a<j-1;j++){
        sum+=pre[a];
    }
    return sum;
}
 
signed main()
{
    din di(q) di(k)
    int arr[n];
    rep(j,n){
        cin>>arr[j];
    }
    int pre[n]={0};
    preCompute(arr,n,pre,k);
    int presum[n];
    presum[0]=pre[0];
    for(int i=1;i<n;i++){
        presum[i]=presum[i-1]+pre[i];
    }
    // rep(i,n){
    //     cout<<presum[i]<<" ";
 
    // }
    // cout<<"\n";
    rep(i,q){
        if(n==1){
            cout<<k-1<<"\n";
            continue;
        }
        di(l) di(r)
        int sum=0;
        l--;
        r--;
        if(r-l-1>0){
            int left=l+1;
            int right=r-1;
            sum+=presum[right]-presum[left-1];
            sum+=arr[l+1]-2+k+1-arr[r-1]-2;
            cout<<sum<<"\n";
        }else{
            if(l==r){
                cout<<k-1<<"\n";
                continue;
            }else{
                cout<<arr[r]-2+k-arr[l]-1<<"\n";
                continue;
            }
        }
        // if((r-l)>=2){
        // int p=arr[l]-2;
        // p+=rangeSum(l,r,pre);
        // p+=k-arr[r-2]-1;
        // cout<<p<<"\n";
        // }
        // else if((r-l)==1){
        //     int p=0;
        //     p=p+arr[r-1]-2+k-arr[l-1]-1;
        //     cout<<p<<"\n";
        // }
        // else{
        //     cout<<k-1<<"\n";
        // }
    }
    return 0;
}
 
 
// for(int a=l;a<r-1;a++){
//                 int z=arr[a+1]-arr[a-1]-2;
//                 if(z>0){
//                     p+=z;
//                 }
//             }