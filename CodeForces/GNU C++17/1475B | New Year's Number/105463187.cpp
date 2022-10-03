#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     int a;
    //     x:
    //         ;
    //     cin>>a;
    //     int x=a/2020;
    //     for(int j=0;j<=x;j++){
    //         for(int k=0;k<=x;k++){
    //             if(a==k*2020+j*2021){
    //                 cout<<"YES\n";
    //                 i++;
    //                 goto x;
    //             }
    //         }
    //     }
    //     cout<<"NO\n";
    // }
    while(n--){
        int a;
        cin>>a;
        if((a/2020)>=a%2020){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}