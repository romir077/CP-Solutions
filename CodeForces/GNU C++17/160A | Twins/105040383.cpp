#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum2=0;
    for(int i=0;i>=0;i++){
        sum2+=arr[i];
        if(2*sum2>(sum1)){
            cout<<i+1;
            break;
        }
    }
    return 0;
}