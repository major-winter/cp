#include <bits/stdc++.h>
using namespace std;

int func (int x , int a) {
  return floor(x / a) + (x % a);

}
int main() {
  int t;
  cin >> t;
  while(t--) {
    int l, r, a;
    cin >> l >> r >> a;
    int max = INT_MIN;

    for (int i = l; i < r; i++) {
      int curr = func(i, a);

      if (curr > max)
        max = curr;
    }
    cout << max << '\n';

  }
  return 0;
}
