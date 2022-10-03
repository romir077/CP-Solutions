#include<iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    if(a[0]==a[1] && a[1]==a[2]){
        cout<<"Won"<<"\n";
    }
    else{
        cout<<"Lost"<<"\n";
    }
    return 0;
}