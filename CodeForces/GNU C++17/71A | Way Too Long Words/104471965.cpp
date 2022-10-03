#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string a[n];
    int len[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        len[i]=a[i].length();
        // char p[len[i]];
        // strcpy(p, a[i].c_str());
        if(len[i]>10){
            cout<<a[i][0]<<len[i]-2<<a[i][len[i]-1]<<"\n";
        }
        if(len[i]<=10){
            cout<<a[i]<<"\n";
        }
       
 
    }
 
    return 0;
}
 