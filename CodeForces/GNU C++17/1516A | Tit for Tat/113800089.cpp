#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        while(k>0)
        {   
            if(i==n-1) {
                if (a[n-1]>=0){
                a[i]=a[i]-1;
                a[n-1]=a[n-1]+1;
                k--;
                }
            }
            else {
                if (a[i]>0)
                {
                    a[i]=a[i]-1;
                    a[n-1]=a[n-1]+1;
                    k--;
                }
                else
                {
                    i=i+1;
                }
            }
        
    }
       
          for (int i=0;i<n;i++)
          cout<<a[i]<<" ";
          cout<<"\n";
    }
 return 0;
}