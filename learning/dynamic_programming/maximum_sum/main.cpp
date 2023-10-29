#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0 ; i < n; ++i) {
    cin >> S[i];
  }
  vector<int> dp(n, 0);
  dp[0] = max(dp[0], S[0]);
  for (int i = 1; i < n; ++i) {
    dp[i] = max(dp[i - 1], dp[i - 1] + S[i]);
  }
  cout << dp[n - 1] << '\n';
  return 0;
}
