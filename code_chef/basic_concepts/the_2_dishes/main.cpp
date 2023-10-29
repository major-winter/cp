#include <iostream>
using namespace std;

int main() {
  int t, n, s; // n is the upper bound, s is the sum
  cin >> t;
  while (t--) {
    cin >> n >> s;
    if (s <= n )
      cout << s << '\n';
    else
      cout << n * 2 - s << '\n';
  }
  return 0;
}
