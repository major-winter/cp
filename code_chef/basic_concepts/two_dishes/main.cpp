#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // 1 a + 1 b = 1 dish
    // 1 b + 1 c = 1 dish
    if (a + c >= n && b >= n)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
