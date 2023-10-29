#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  while(q--) {
    int a, b;
    cin >> a >> b;
    if (abs(a - b) >= 1 && abs(a - b) <= 2)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
