#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cin>>a;
    for(int i=0;i<a;i++){
        int e=1,f=1;
        cin>>b>>c>>d;
        while((b%2)==0){
            e=e*2;
            b/=2;
        }
        while((c%2)==0){
            f=f*2;
            c/=2;
        }
        n=e*f;
        cerr<<n<<"\n";
    if(n>=d){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
    
    return 0;
}