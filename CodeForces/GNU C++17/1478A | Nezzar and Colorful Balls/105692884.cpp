#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++){
            cin>>arr[j];
        }
        int max_count = 1, res = arr[0], curr_count = 1; 
    for (int a = 1; a < x; a++) { 
        if (arr[a] == arr[a - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[a - 1]; 
            } 
            curr_count = 1; 
        } 
    }
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[x - 1]; 
    }
    int z=0;
    for(int l=0;l<x;l++){
        if(arr[l]==res){
            z++;
        }
        else{
            continue;
        }
    }
    if(z==0){
        cout<<1<<"\n";
    }
    else{
        cout<<z<<"\n"; 
    }
}
    return 0;
}