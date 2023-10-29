#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& candies, int minCandies) {
  int a = 0;
  int res = 0;
  for (int i = 0; i < candies.size(); i++) {
    if (candies[i] > minCandies) {
      a = candies[i] - minCandies;
      res += a;
    }
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int minCandies = INT_MAX;
    vector<int> candies;
    while(n--) {
      int a;
      cin >> a;
      candies.push_back(a);
      minCandies = min(minCandies, a);
    }
    cout << solve(candies, minCandies) << '\n';
  }
  return 0;
}
