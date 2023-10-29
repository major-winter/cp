#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define repset(n) for (auto it : n)

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N), T(M);
  rep(i, N)
    cin >> S[i];
  rep(i, M)
    cin >> T[i];
  sort(begin(T), end(T));
  int answer = 0;

  rep(i, N) {
    if (binary_search(begin(T), end(T), S[i].substr(3)))
      answer++;
  }
  cout << answer << '\n';
  return 0;
}
// int main() {
//   int N, M;
//   cin >> N >> M;
//   vector<string> S(N);
//   set<string> T;
//   rep(i, N) {
//     cin >> S[i];
//   }
//   rep(i, M) {
//     string x;
//     cin >> x;
//     T.insert(x);
//   }
//   int answer = 0;
//   rep(i, N) {
//     string ss = S[i].substr(3);
//     repset(T) {
//       if (ss == it) answer++;
//     }
//   }
//   cout << answer << '\n';
//   return 0;
// }
