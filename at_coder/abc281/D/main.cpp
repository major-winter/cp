#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int N, K, D;
int max = -1, curMax = -1;
void generateSubset(vector<int> &s, vector<int> &A, int K, int i) {
  if (s.size() == K) {
    // for (auto it : s)
    //   cout << it << ' ';
    // cout << '\n';
    long long sum = accumulate(s.begin(), s.end(), 0);
    if (sum % D == 0 && sum > curMax)
      curMax = sum;
  }
  else {
    for (int j = i; j < N; ++j) {
      s.push_back(A[j]);
      generateSubset(s, A, K, j + 1);
      s.pop_back();
    }
  }

}

int main() {
  cin >> N >> K >> D;
  vector<int> A(N), s;
  rep(i, N) cin >> A[i];
  generateSubset(s, A, K, 0);
  cout << curMax << '\n';
  return 0;
}
