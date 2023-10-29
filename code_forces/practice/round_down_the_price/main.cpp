#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a;
    cin >> a;
    if (a < 10)
      cout << a - 1 << '\n';
    else {
      int base = 10;
      while(a >= base) {
        base *= 10;
      }
      base /= 10;
      cout << abs(a - base) << '\n';
    }
    
  }
  return 0;
}
