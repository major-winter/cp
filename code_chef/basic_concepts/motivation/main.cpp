#include<bits/stdc++.h>
using namespace std;

int main () {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int ans = 0;
    while (n--) {
      int s, r;
      cin >> s >> r;
      if (s <= x && r > ans)
        ans = r;
    }
    cout << ans << '\n';
  }
  return 0;
}
