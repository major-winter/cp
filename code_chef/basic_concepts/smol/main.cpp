#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    if (n < k || k == 0) {
      cout << n << '\n';
    } else {
      cout << n % k << '\n';
    }
  }
  return 0;
}
