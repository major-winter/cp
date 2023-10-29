#include<bits/stdc++.h>
using namespace std;
int ans = 0;
void dice (int n, int i, vector<int> subset) {
  if (n == 0) {
    ans = (ans + 1) % ((1000000000) + 7);
    for (auto& it : subset)
      cout << it << ' ';
    cout << '\n';
    return;
  }
  for (int j = 1; j <= n; j++ ) {
    subset.push_back(j);
    dice(n - j, j, subset);
    subset.pop_back();
  }
}
int main() {
  int n;
  cin >> n;
  vector<int> subset;
  dice(n, 1, subset);
  cout << ans << '\n';
  return 0;
}
