#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    double a=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        double v,p;
        cin>>v>>p;
        a+=(v*(p));
        // cout<<a<<"\n";
        if(a>x*100){
            cout<<i+1<<"\n";
            goto x;
        }
    }
    // cout<<a<<"\n";
    cout<<-1<<"\n";
    x:
        ;
    return 0;
}