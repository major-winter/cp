#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int x;
    cin >> x;
    if(x > 65)
      cout << "Overload\n";
    else if (x < 35)
      cout << "Underload\n";
    else
      cout << "Normal\n";
  }
  return 0;
}
