#include <bits/stdc++.h>
using namespace std;

long long bottomUp(int n, vector<int> & bills) {
  vector<int> dp(n + 1);
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    dp[i] = INT_MAX;
    for (int j = 0; j < bills.size(); j++) {
      if (i >= bills[j]) {
        dp[i] = min(dp[i], dp[i - bills[j]] + 1); 
      }
    }
  }

  return dp[n];
}
int main() {
  long long n;
  cin >> n;
  vector<int> bills{1, 5, 10, 20, 100};
  long long ans = bottomUp(n, bills);
  cout << ans << '\n';
  return 0;
}
