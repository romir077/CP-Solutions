#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        string t;
        cin>>b;
        cin>>t;
        char a[b];
        a[0]='1';
    //     for(int j=0;j<t.length();j++){
    //     if(t[j]==1 && t[j+1]==1){
    //         a[j+1]=0;
    //     }
    //     if(t[j]==1 && t[j+1]!=1){
    //         a[j+1]=1;
    //     }
    // }
    // for(int k=0;k<t.length();k++){
    // cout<<a[k];
    // }
        for(int j=1;j<b;j++){
          
            if(t[j]=='1'){
                if(t[j]!=t[j-1] && a[j-1]=='1'){
                    a[j]='1';
                }
                else if(t[j]!=t[j-1] && a[j-1]=='0'){
                    a[j]='1';
                }
                else if(t[j]==t[j-1] && a[j-1]=='1'){
 
                    a[j]='0';
                }
                else if(t[j]==t[j-1] && a[j-1]=='0'){
                    a[j]='1';
                }
            }
                // else if(t[j]!=t[j+1] && t[j]==t[j-1]){
                //     a[j]=1;
                //     a[j+1]=1;
                // }
                // else if(t[j]==t[j+1] && t[j]==t[j-1] && a[j]==1){
                //     a[j+1]=0;
                // }
                // else if(t[j]==t[j+1] && t[j]==t[j-1] && a[j]==0){
                //     a[j+1]=1;
                // }
            
            // else if(t[j]==0){
            //     if(t[j]!=t[j-1]){
            //         a[j]='1';
            //     }
            //     else if(t[j]==t[j-1]){
            //         a[j]='0';
            //     }
            // }
            else if(t[j]=='0'){
                if(t[j]!=t[j-1] && a[j-1]=='1'){
                    a[j]='1';
                }
                else if(t[j]!=t[j-1] && a[j-1]=='0'){
                    a[j]='0';
                }
                else if(t[j]==t[j-1] && a[j-1]=='1'){
                    a[j]='0';
                }
                else if(t[j]==t[j-1] && a[j-1]=='0'){
                    a[j]='1';
                }
            }
        }
    for(int k=0;k<b;k++){
    cout<<a[k];
    } 
    cout<<"\n";
    }
    return 0;
}