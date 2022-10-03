#include<iostream>
#define for(i,a) for(int i=0;i<a;i++)
using namespace std;
 
int main()
{
    string a,b;
    cin>>a>>b;
    int x=a.length();
    int y=b.length();
    for(i,x){
        char c=a[i];
        if(c>=65 && c<=90){
            c+=32;
            a[i]=c;
        }
    }
    for(i,y){
        char c=b[i];
        if(c>=65 && c<=90){
            c+=32;
            b[i]=c;
        }
    }
    for(i,x){
        if(a[i]==b[i]){
            continue;
        }
        if (a[i]>b[i])
        {
            cout<<1;
            break;
        }
        else if(a[i]<b[i]){
            cout<<-1;
            break;
        }
    }
        if(a==b){
            cout<<0;
        }
    return 0;
}