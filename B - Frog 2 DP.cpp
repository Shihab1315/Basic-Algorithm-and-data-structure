
#include <bits/stdc++.h>

using namespace std;
int n,h[1000005],k,vis[1000005],dp[1000005];

int solve(int i){
    if(i==n)return 0;
    if(vis[i])return dp[i];
    int res=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j<=n){
        int cost=abs(h[i]-h[i+j]);
        int now=cost+solve(i+j);
        res=min(res,now);
        }
    }
    vis[i]=1;
    dp[i]=res;
    return res;
}
int main()
{
  cin>>n;
  cin>>k;
  for(int i=1;i<=n;i++){
    cin>>h[i];
  }
  cout<<solve(1);
   

    return 0;
}