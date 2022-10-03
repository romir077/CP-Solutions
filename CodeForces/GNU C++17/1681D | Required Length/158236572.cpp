    #include<bits/stdc++.h>
    #define ll long long
    #define rep(i,a,b) for(int i=a;i<b;i++)
    #define rrep(i,a,b) for(int i=a;i>=b;i--)
    #define repin rep(i,0,n)
    #define int long long
    #define di(a) int a;cin>>a;
    #define dia di(a)
    #define dix di(x)
    #define diy di(y)
    #define diz di(z)
    #define dib di(b)
    #define dic di(c)
    #define din di(n)
    #define precise(i) cout<<fixed<<setprecision(i)
    #define V vector<int>
    #define take(a,n) for(int j=0;j<n;j++) cin>>a[j];
    #define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';
    #define vpii vector<pair<int,int>>
    #define all(x) x.begin(),x.end()
    #define sis string s;
    #define sin string s;cin>>s;
    #define db double
    #define MOD 1000000007
    #define el cout<<endl;
    using namespace std;
 
 
    int power( int N, int m){
        int power = N, sum = 1;
        if(N == 0) sum = 0;
        while(m > 0){if((m & 1) == 1){sum *= power;sum%=MOD;}
        power = power * power;m = m >> 1;power%=MOD;}
        return sum%MOD;
    }
 
    int mod_inverse(int x){
        int result = 1;
        return power(x,MOD-2);
    }
 
    int lenn(int x){
        int len=0;
        while(x){
            len++;
            x/=10;
        }
        return len;
    }
 
    signed main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        din dix
        if(lenn(x)==n){cout<<"0\n";return 0;}
        int ans=INT_MAX;
        V temp;
        int p=x;
        while(p){
            temp.push_back(p%10);
            p/=10;
        }
        map<string,int>mp;
        if(count(all(temp),1)==temp.size()){cout<<"-1\n";return 0;}
        queue<pair<int,int>>q;
        mp[to_string(x)]++;
        q.push({x,0});
        int pnt=0;
        while(!q.empty()){
            if(pnt>1000000){
                if(ans!=INT_MAX)cout<<ans<<"\n";
                else cout<<"-1\n";
                return 0;
            }
            int a=q.front().first,b=q.front().second;
            // cout<<a<<" ";
            q.pop();
            V c(10,0);
            int p=a;
            while(p){
                c[p%10]++;
                p/=10;
            }
            // int cnt=0;
            for(int i=9;i>=0;i--){
                // if(cnt==2)break;
                if(i==0)continue;
                if(i==1)continue;
                if(c[i]==0)continue;
                // cnt++;
                pnt++;
                int temp=i*a;
                // cout<<temp<<" ";
                // if(temp<0){ans=min(ans,b+1);cout<<ans<<"\n";cout<<"dfafe";}
                // else{
                    if(lenn(temp)==n)ans=min(ans,b+1);
                    else if(lenn(temp)<n){
                        if(mp.find(to_string(temp))==mp.end()){q.push({temp,b+1});mp[to_string(temp)]++;}
                    }
                // }
            }
        }
        if(ans!=INT_MAX)cout<<ans<<"\n";
        else cout<<"-1\n";
        return 0;
    }