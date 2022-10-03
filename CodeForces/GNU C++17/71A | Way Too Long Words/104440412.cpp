#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        int len[n];
        len[i]=a[i].length();
        char p[len[i]];
        strcpy(p, a[i].c_str());
        if(len[i]>10){
            cout<<p[0]<<(a[i].length())-2<<p[len[i]-1]<<"\n";
        }
        if(len[i]<=10){
            cout<<a[i]<<"\n";
        }
       
    //     for (i = 0; i < a.length(); i++)  
    // { 
    //     // If it is the first word 
    //     // of the string then print it. 
    //     if (i == 0) 
    //         cout<<a[i]; 
  
    //     // If it is the last word of the string 
    //     // then also print it. 
    //     if (i == a.length() - 1) 
    //         cout<<a[i]; 
  
    //     // If there is a space 
    //     // print the successor and predecessor 
    //     // to space. 
    //     if (a[i]==' ')  
    //     { 
    //         cout<<a[i-1]<<" "<<a[i+1]; 
    //     } 
    // } 
    }
 
    return 0;
}