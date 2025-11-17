
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,q;
cin>>n>>q;
int x[n+1];
for(int i=1;i<=n;i++){
    cin>>x[i];
}
long long Prefix_sum[n+1];
Prefix_sum[0]=0;
for(int i=1;i<=n;i++){
    Prefix_sum[i]=Prefix_sum[i-1]+x[i];
}
while(q--){
    int l,r;
    cin>>l>>r;
    long long ans=Prefix_sum[r]-Prefix_sum[l-1];
    cout<<ans<<'\n';
}


    return 0;
}