#include<bits/stdc++.h>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define dic di(c)
#define din di(n)
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    di(t)
    while(t--){
        din
        int c0=0,c1=0,c2=0;
        int arr[n];
        rep(i,n){
            cin>>arr[i];
            if(arr[i]%3==0) c0++;
            if(arr[i]%3==1) c1++;
            if(arr[i]%3==2) c2++;
        }
        int y=n/3;
        int count=0;
        int a=c0-y,b=c1-y,c=c2-y;
        if(a>0){
            b+=a;
            count+=a;
            if(b>0){
                count+=b;
            }
            else{
                count+=abs(2*b);
            }
        }
        else{
            if(b>0){
                c+=b;
                count+=b;
                count+=c;
            }
            else{
                a+=c;
                count+=c;
                count+=a;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
        // int maxi=INT_MIN;
        // int max_index=-1;
        // rep(i,3){
        //     if(c[i]>maxi){
        //         maxi=c[i];
        //         max_index=i;
        //     }
        // }
        // int off=c[max_index]-y;
        // int sum=off;
        // c[(max_index+1)%3]+=off;
        // if(c[(max_index+1)%3]<y){
        //     cout<<sum+2*c[(max_index+2)%3]<<"\n";
        // }else if(c[(max_index+1)%3]>y){
        //     cout<<sum+c[(max_index+1)%3]-y<<"\n";
        // }else{
        //     cout<<sum<<"\n";
        // }
        // // if(c1==c2 && c1==y){
        // //     cout<<0<<"\n";
        // // }
        // // else{
        // //     int a=c0-y,b=c1-y,c=c2-y;
        // //     if(a==0){
        // //         cout<<abs(b)<<"\n";
        // //     }
        // //     else if(b==0 && c>0){
        // //         cout<<c<<"\n";
        // //     }
        // //     else if(b==0 && c<0){
        // //         cout<<abs(c)<<"\n";
        // //     }
        // //     else if(c==0){
        // //         if(b>0){
        // //             cout<<2*b<<"\n";
        // //         }
        // //         else{
        // //             cout<<a<<"\n";
        // //         }
        // //     }
        // //     else{
        // //         if(a<=b && a<=c){
 
        // //         }
        // //     }
        // // }
        // // // int brr[3];
        // // brr[0]=c0;
        // // brr[1]=c1;
        // // brr[2]=c2;
        // // sort(brr,brr+3);
        // // if(((double)(brr[0]+brr[2])/2)==brr[1]){
        // //     cout<<brr[1]-brr[0]<<"\n";
        // // }
        // // else{
        // //     cout<<(abs(brr[1]-brr[0])+abs(brr[1]-brr[2])+abs(brr[2]-brr[0]))/2<<"\n";
        // // }