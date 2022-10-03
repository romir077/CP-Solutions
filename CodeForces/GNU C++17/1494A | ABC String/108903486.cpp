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
#define V vector<int>
#define vpii vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define sis string s;
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    di(t)
    while(t--){
        sin
        int a=count(s.begin(),s.end(),s[0]);
        int b=count(s.begin(),s.end(),s[s.length()-1]);
        int c=s.length()-a-b;
        if(max(a,b)==a && a!=b){
 
        }
        if(s[0]==s[s.length()-1]){
            cout<<"NO\n";
        }
        else{
            if(max(a,b)==min(a,b)+c){
                int left=0,right=0,flag=0;
                rep(i,s.length()){
                    if(s[i]==s[0]){
                        left++;
                    }
                    if(s[i]==s[s.length()-1]){
                        right++;
                    }
                    if(s[i]!=s[0] && s[i]!=s[s.length()-1]){
                        if(max(a,b)==a){
                            right++;
                        }
                        else{
                            left++;
                        }
                    }
                    if(right>left){
                        cout<<"NO\n";
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<"YES\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}