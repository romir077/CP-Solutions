#include<iostream>
#include<algorithm>
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int p[(n+1)/2];
    for(int i=0;i<(n+1)/2;i++){
        p[i]=(s[(2*i)]-48);
    }
    sort(p,p+((n+1)/2));
    for(int j=0;j<((n+1)/2)-1;j++){
        cout<<p[j]<<'+';
    }
    cout<<p[((n+1)/2)-1];
 
    return 0;
}