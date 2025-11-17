
#include <bits/stdc++.h>

using namespace std;
int h[1000005], n, vis[1000005], dp[1000005];
int jumps(int i)
{
  int res = INT_MAX;

  if (n == i)
    return 0;
  if (vis[i])
    return dp[i];
  // i->i+1
  int cost = abs(h[i] - h[i + 1]);
  int now = cost + jumps(i + 1);
  res = min(res, now);
  // i->i+2
  if (i + 2 <= n)
  {
    cost = abs(h[i] - h[i + 2]);
    now = cost + jumps(i + 2);
    res = min(res, now);
  }
  vis[i] = 1;
  dp[i] = res;
  return res;
}
int main()
{

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> h[i];
  }
  cout << jumps(1);

  return 0;
}