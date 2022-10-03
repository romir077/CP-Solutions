#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define rep(i,a) for(int i=0;i<a;i++)
#define int long long
#define di(a) int a;cin>>a;
#define dia di(a)
#define dix di(x)
#define diy di(y)
#define diz di(z)
#define dib di(b)
#define din di(n)
#define db double
#define all(x) x.begin(),x.end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
signed main()
{
    di(t)
    while(t--){
        din
        string s;
        cin>>s;
        int a=count(all(s),'T');
        int b=count(all(s),'M');
        int flag1=0,flag2=0;
        if(a==2*b && s[0]=='T' && s[n-1]=='T') {
            int sum=0,gum=0;
            rep(i,n){
                if(s[i]=='T'){
                    sum++;
                }
                if(s[i]=='M'){
                    sum--;
                    if(sum<0){
                        flag1=1;
                        break;
                    }
                }
            }
            for(int i=n-1;i>=0;i--) {
                if(s[i]=='T'){
                    gum++;
                }
                if(s[i]=='M'){
                    gum--;
                    if(gum<0){
                        flag2=1;
                        break;
                    }
                }
            }
            if(flag1==0 && flag2==0) {cout<<"YES\n";}
            else {cout<<"NO\n";}
        }
        else cout<<"NO\n";
    }
    return 0;
}