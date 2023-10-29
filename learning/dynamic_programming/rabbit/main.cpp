#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  vector<int> dp(n + 1, -1);
  const char kSwamp = 'w';
  const char kEmpty = '.';
  const char kGrass = '"';
  dp[0] = 0;
  dp[1] = 0;
  for (int i = 2; i <= n; ++i) {
    if (s[i - 1] != kSwamp) {
      dp[i] = max({dp[i - 1], i >= 3 ? dp[i - 3] : -1, i >= 5 ? dp[i - 5] : -1});
      if (s[i - 1] == kGrass && dp[i - 1] != -1)
        dp[i]++;
    }
  }
  cout << dp[n] << '\n';
  return 0;
}
