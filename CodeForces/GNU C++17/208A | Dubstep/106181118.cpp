#include<iostream>
#include<vector>
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
#define si(n) string n
#define sis string s
#define sin string s;cin>>s;
using namespace std;
 
signed main()
{
    sin
    // rep(j,s.length()-2){
    // if(s[0]=='W' && s[1]=='U' && s[2]=='B'){
    //     s[0]='\0';
    //     s[1]='\0';
    //     s[2]='\0';
    // }
    // else if(s[s.length()-3]=='W' && s[s.length()-2]=='U' && s[s.length()-1]=='B'){
    //     s[0]='\0';
    //     s[1]='\0';
    //     s[2]='\0';
    // }
    //s=abswubbcwubhk
    //s=abs bcwubhk
    if(s.length()==1){
    cout<<s;
    return 0;}
    rep(i,s.length()-2){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    // }
    int flag=0;
    vector <char> ss;
    rep(i,s.length()-1){
        if(flag==0 && s[i]==' ' && s[i+1]==' '){
          //  cout<<"a";
            continue;
        } 
        else if(flag==0 && s[i]==' ' && s[i+1]!=' '){
            flag=1;
            ss.push_back(s[i+1]);
           // cout<<"b";
        }
        else if(flag==0 && s[i]!=' ' && s[i+1]==' '){
            flag=1;
            ss.push_back(s[i]);
            ss.push_back(s[i+1]);
           // cout<<"b";
        }
        else if(flag==0 && s[i]!=' ' && s[i+1]!=' '){
            flag=1;
            ss.push_back(s[i]);
            ss.push_back(s[i+1]);
           // cout<<"b";
        }
        else if(s[i]!=' ' && s[i+1]!=' '){
            ss.push_back(s[i+1]);
          //  cout<<"c";
        }
        else if(s[i]!=' ' && s[i+1]==' '){
            ss.push_back(' ');// ss.push_back(s[i+1]);
            //cout<<"d";
        }
        else if(s[i]==' ' && s[i+1]==' '){
           // cout<<"e";
            continue;
        }
        else if(s[i]==' ' && s[i+1]!=' '){
            ss.push_back(s[i+1]);
            //cout<<"f";
        }
    }
    rep(l,ss.size()){
    cout<<ss[l];
    }
    return 0;
}