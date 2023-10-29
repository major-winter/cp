#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    double s, a, b, c;
    cin >> s >> a >> b >> c;
    double newStockPrice = s + (s * c) / 100;
    if (newStockPrice >= a && newStockPrice <= b)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
