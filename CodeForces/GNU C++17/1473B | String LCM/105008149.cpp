#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
 
        int n1, n2, max;
        n1=a.length();
        n2=b.length();
 
        max = (n1 > n2) ? n1 : n2;
 
        do
        {
            if (max % n1 == 0 && max % n2 == 0){
            break;
        }
            else
            ++max;
        } 
        while (true);
        string temp1=a;
        for(int j=0;j<((max/n1)-1);j++){
            a=temp1+a;
        }
        string temp2=b;
        for(int j=0;j<((max/n2)-1);j++){
            b=temp2+b;
        }
        if(a==b){
            cout<<a<<"\n";
        }
        else if(a!=b){
            cout<<-1<<"\n";
        }
 
 
    }
    return 0;
}