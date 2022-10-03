#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    int C=0;
    for(int j=0;j<n;j++){
        C=C+A[j]*B[j];
    }
    if(C==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}