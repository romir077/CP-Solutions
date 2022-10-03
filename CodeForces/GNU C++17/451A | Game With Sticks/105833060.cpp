#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    if(min(n,m)%2==0){
        cout<<"Malvika\n";
    }
    else{
        cout<<"Akshat\n";
    }
    return 0;
}