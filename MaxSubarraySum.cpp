
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int x[n+1];
for(int i=1;i<=n;i++){
    cin>>x[i];
}
long long Prefix_sum[n+1];
Prefix_sum[0]=0;
for(int i=1;i<=n;i++){
    Prefix_sum[i]=Prefix_sum[i-1]+x[i];
}
long long min_prefixSum=0;
long long mx=x[1];
for(int i=1;i<=n;i++){
    mx=max(mx,Prefix_sum[i]-min_prefixSum);
    min_prefixSum=min(min_prefixSum,Prefix_sum[i]);
}
cout<<mx<<'\n';
    return 0;
}