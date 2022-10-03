#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int n,a;
    cin>>n;
    int arr[14]={4,7,44,77,47,74,444,447,474,744,477,747,774,777};
    for(int i=0;i<14;i++){
        if(n==arr[i]){
            cout<<"YES";
            break;
        }
        else if(n!=arr[i]){
            if(n%(arr[i])==0){
                cout<<"YES";
                break;
            }
            else{
                a=i;
                continue;
            }
        }
    }
    if(a==13){
        cout<<"NO";
    }
    return 0;
}