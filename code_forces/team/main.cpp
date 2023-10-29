#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0, ans = 0;
  while (n--) {
    int a;
    for (int i = 0; i < 3; i++) {
      cin >> a;
      if (a == 1)
        count++;
    }
    if (count >= 2)
      ans++;
    count = 0;
  }
  cout << ans << '\n';
  return 0;
}
