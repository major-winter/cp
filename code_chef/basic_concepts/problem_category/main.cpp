#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (1 <= x && x < 100)
      cout << "Easy\n";
    else if (100 <= x && x < 200)
      cout << "Medium\n";
    else
      cout << "Hard\n";
  }
  return 0;
}
