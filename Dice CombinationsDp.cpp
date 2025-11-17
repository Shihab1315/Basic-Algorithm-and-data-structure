
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
// int vis[1000005],dp[1000005];
// int solve(int sum){
//     if(sum==0)return 1;
//     if(vis[sum]==1)return dp[sum];

//     int res=0;
//     for(int i=1;i<=6;i++){
     //if(sum>=i){
//         res+=solve(sum-i);
//         res%=mod;
//     }
//}
//     vis[sum]=1;
//     dp[sum]=res;
//     return res;
// }

// int main()
// {

//    int n;
//    cin>>n;
   
//    cout<<solve(n);

//     return 0;
// }

//using single array
int dp[1000005];
int solve(int sum){
    if(sum==0)return 1;
    if(dp[sum]!=-1)return dp[sum];

    int res=0;
    for(int i=1;i<=6;i++){
        if(sum>=i){
        res+=solve(sum-i);
        res%=mod;
    }
}
   
    dp[sum]=res;
    return res;
};
int main()
{

   int n;
   cin>>n;

   for(int i=0;i<=n;i++){
    dp[i]=-1;
   }
  // uporer for loop er moto same kaj korbe all array fill hobe -1 diye
   //memset(dp,-1,sizeof(dp));
   cout<<solve(n);

    return 0;
}