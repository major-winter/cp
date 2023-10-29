#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void printDigits(ll n) {
  if (n == 0)
    return;
  int last = n % 10;
  n = n / 10;
  printDigits(n);
  cout << last << ' ';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    if (n == 0)
      cout << n;
    else
      printDigits(n);
    cout << '\n';
  }
  return 0;
}
