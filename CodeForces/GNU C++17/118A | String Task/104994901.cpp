#include<iostream>
#define for(i,n) for(int i=0;i<n;i++)
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int a=s.length();
    for(i,a){
        char c=s[i];
        if(c>=65 && c<=90){
            c+=32;
            s[i]=c;
        }
    }
    string t="\0";
    for(i,a){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){ //|| s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U' || s[i]=='Y'){
                // s[i]='\0';
                continue;
        }
        t=t+"."+s[i];        
    }
    cout<<t<<"\n";
    return 0;
}