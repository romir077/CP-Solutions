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
    string s;
  cin>>s;
  int flag=0;
  rep(i,s.size()){
  	if(i%2==0){
     if(s[i]<=122 && s[i]>=97){
     	continue;
     }
     else{
        flag=1;
     	break;
     }
    }
    else{
    	if(s[i]>=65 && s[i]<=90){
        	continue;
        }
      	else{
          	flag=1;
        	break;
        }
    }
  }
  if(flag==0) cout<<"Yes";
  else cout<<"No";
    return 0;
}