#include <bits/stdc++.h>
using namespace std;

void convert(int n) {
  if (n == 0)
    return;
  convert(n / 2);
  if (n % 2 == 0)
    cout << 0;
  else
    cout << 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    convert(n);
    cout << '\n';
  }
  return 0;
}
