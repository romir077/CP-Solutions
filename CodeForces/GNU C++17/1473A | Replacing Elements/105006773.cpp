#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int j=0;j<a;j++){
            cin>>arr[j];
        }
        sort(arr,arr+a);
        if(arr[a-1]<=b){
            cout<<"YES"<<"\n";
        }
        else if(arr[a-1]>b){
        if((arr[0]+arr[1])<=b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        }
    }
    return 0;
}