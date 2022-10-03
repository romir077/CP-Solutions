#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
 
// int arraySum(vector<int> &v)  
// { 
//     int initial_sum  = 0;  
//     return accumulate(v.begin(), v.end(), initial_sum); 
// } 
   
// int main()  
// { 
//     vector<int> v{5 , 10 , 15} ; 
//     cout << arraySum(v); 
//     return 0; 
// }
 
int main()
{
    int n;
    cin>>n;
    rep(i,n){
        int a,b;
        cin>>a>>b;
        vector <ll> arr(a);
        rep(j,a){
            cin>>arr[j];
        }
        ll p=arr[0];
        ll t=0;
        ll sum=0;
        for(int j=1;j<a;j++){
            // int x=accumulate(arr.begin(), arr.begin()+j , 0);
            t+=arr[j-1];
            ll z=(100*arr[j]);
            if(z<=b*t){
            continue;}
            else{
                sum+=ceil((double)z/b)-t;
                t+=ceil((double)z/b)-t;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}