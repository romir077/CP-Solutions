#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int x= pow(2,n);
    long long a[x/2];
    long long b[x/2];
    for(int i=0;i<(x/2);i++){
        cin>>a[i];
    }
    for(int i=0;i<x/2;i++){
        cin>>b[i];
    }
    long long c[x];
    for(int j=0;j<(x/2);j++){
        c[j]=a[j];
    }
    for(int j=0;j<(x/2);j++){
        c[j+(x/2)]=b[j];
    }
    sort(a,a+(x/2));
    sort(b,b+(x/2));
    int d;
    d=fmin((int)a[(x/2)-1],(int)(b[(x/2)-1]));
    // cout<<d;

    int j=0;
    while(d!=c[j]){
        j++;
    }
    cout<<j+1;
    // if((a[(x/2)-1])<(b[(x/2)-1])){
    //     cout<<(a[(x/2)-1]);
    // }
    // else{
    //     cout<<(b[(x/2)-1]);
    // }

    return 0;
}