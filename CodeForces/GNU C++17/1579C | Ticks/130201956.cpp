#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<string> b(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)b[i].push_back('.');
    }
    while(k<11){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>=k && j>=k && m-1-j>=k && a[i][j]=='*'){
                    int f=1;
                    for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)if(a[p][q]=='.')f=0;
                    for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)if(a[p][q]=='.')f=0;
                    if(f==1){
                        for(int p=i,q=j;p>=i-k,q>=j-k;p--,q--)b[p][q]='*';
                        for(int p=i,q=j;p>=i-k,q<=j+k;p--,q++)b[p][q]='*';
                    }
                }
            }
        }
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]=='.' && a[i][j]=='*') {cout<<"NO\n";return;}
            if(b[i][j]=='*' && a[i][j]=='.') {cout<<"NO\n";return;}
        }
    }
    cout<<"YES\n";
    
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}