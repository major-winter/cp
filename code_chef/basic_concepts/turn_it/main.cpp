#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int u, v, a, s;
    cin >> u >> v >> a >> s;
    int desired_velocity = u * u - 2 * a * s;
    if (desired_velocity <= v * v)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
