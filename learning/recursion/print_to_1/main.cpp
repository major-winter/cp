#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  if (n > 0) {
    cout << n;
    if (n - 1 > 0)
      cout << ' ';
    print(n - 1);
  }
}

int main() {
  int n;
  cin >> n;
  print(n);
  return 0;
}
