#include<iostream>
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    int a;
    string s,p="hello";
    cin>>s;
    int n=s.length();
    int i=0;
    for(int j=0;j<n;j++){
        if(s[j]==p[i]){
            i++;
        }
        if(i==5){
            cout<<"YES";
            return 0;
        }
 
    }
    cout<<"NO";
 
 
    // for(int i=0;i<n;i++){
    //     if(s[i]=='h'){
    //     a=i;
    //     break;
    //     }
    //     else if(i!=n-1){
    //         continue;
    //         // cout<<"NO";
    //         // break;
    //     }
    //     else if(i==n-1){
    //         cout<<"NO";
    //     }
    // }
    // for(int i=a+1;i<n;i++){
    //     if(s[i]=='e'){
    //     a=i;
    //     break;
    //     }
    //     else if(i!=n-1){
    //         continue;
    //         // cout<<"NO";
    //         // break;
    //     }
    //     else if(i==n-1){
    //         cout<<"NO";
    //     }
    // }
    // for(int i=a+1;i<n;i++){
    //     if(s[i]=='l'){
    //     a=i;
    //     break;
    //     }
    //     else if(i!=n-1){
    //         continue;
    //         // cout<<"NO";
    //         // break;
    //     }
    //     else if(i==n-1){
    //         cout<<"NO";
    //     }
    // }
    // for(int i=a+1;i<n;i++){
    //     if(s[i]=='l'){
    //     a=i;
    //     break;
    //     }
    //     else if(i!=n-1){
    //         continue;
    //         // cout<<"NO";
    //         // break;
    //     }
    //     else if(i==n-1){
    //         cout<<"NO";
    //     }
    // }
    // for(int i=a+1;i<n;i++){
    //     if(s[i]=='o'){
    //         cout<<"Yes";
    //         break;
    //     }
    //     else if(i!=n-1){
    //         continue;
    //         // cout<<"NO";
    //         // break;
    //     }
    //     else if(i==n-1){
    //         cout<<"NO";
    //     }
    // }
    return 0;
}