#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector
#define sp ' '

int main() {
  int n;
  cin >> n;
  vec<int> shops(n + 1, 0);
  for (int i = 1; i <= n ; ++i) {
    cin >> shops[i];
  }
  sort(shops.begin(), shops.end());
  map<int, int> memo;
  for (int i = 1 ; i <= n; ++i) {
    memo[shops[i]] = memo[shops[i - 1]] + 1;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q ;++i) {
    int m;
    cin >> m;
    for (int j = m; j >= 0; --j) {
      bool existed = binary_search(shops.begin(), shops.end(), j);
      if (existed) {
        vec<int>::iterator it = lower_bound(shops.begin(), shops.end(), j);
        int ans = memo[*it];
        cout << ans << ln;
        break;
      } else {
        cout << 0 << ln;
        break;
      }
    }
  }
  return 0;
}
