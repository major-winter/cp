#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a,b,c;
    cin >> a >> b >> c;
    if (b > a + c)
      cout << b << '\n';
    else
      cout << a + c << '\n';
  }
  return 0;
}
