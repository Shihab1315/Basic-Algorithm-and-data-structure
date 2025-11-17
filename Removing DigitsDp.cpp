
#include <bits/stdc++.h>

using namespace std;
int n,vis[1000005],dp[1000005];
int solve(int n){
    if(n==0)return 0;
    if(vis[n])return dp[n];
    int m=n;
    int res=INT_MAX;
    while(m>0){
        int digits=m%10;
        if(digits>0){
          res=min(res,1+solve(n-digits));
        }
        m/=10;
    }
    vis[n]=1;
    dp[n]=res;
    return res;
}
int main()
{

   cin>>n;
   int ans=solve(n);
	cout<<ans<<'\n';


    return 0;
}