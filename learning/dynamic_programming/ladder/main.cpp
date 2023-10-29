#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> points(n + 1, 0), dp(n + 1);
  int i = 1, t = n;

  while(t--) {
    cin >> points[i];
    i++;
  }
  dp[0] = 0;
  dp[1] = points[1];
  for (int i = 2; i <= n; ++i) {
    dp[i] = max(dp[i - 1] + points[i], dp[i - 2] + points[i]);
  }
  cout << dp[n] << '\n';
  return 0;
}
