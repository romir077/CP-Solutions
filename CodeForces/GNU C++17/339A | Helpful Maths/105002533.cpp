#include<iostream>
#include<algorithm>
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int l=(n+1)/2;
    int p[l];
    for(int i=0;i<l;i++){
        p[i]=(s[(2*i)]-48);
    }
    sort(p,p+l);
    for(int j=0;j<l-1;j++){
        cout<<p[j]<<'+';
    }
    cout<<p[l-1];
 
    return 0;
}