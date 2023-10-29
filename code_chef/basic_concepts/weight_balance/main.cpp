#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    int minimumGain = x1 * m;
    int maximumGain = x2 * m;
    int diffGain = w2 - w1;
    if (diffGain >= minimumGain && diffGain <= maximumGain)
      cout << "1\n";
    else
      cout << "0\n";
  }
  return 0;
}
