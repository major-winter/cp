#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  for (int i = 0; i < T.size(); ++i) {
    if (S[i] == T[i]) continue;
    if (S[i] != T[i]) {
      cout << i + 1 << '\n';
      break;
    }
  }
  return 0;
}
