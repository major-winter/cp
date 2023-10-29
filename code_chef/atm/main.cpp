#include <iostream>
using namespace std;

int main () {
  int x; // withdraw
  double y; // balance
  double charge = 0.50;
  cin >> x >> y;
  if (x % 5 == 0 && x + charge <= y) {
    y = y - x - charge;
  }
  cout << y;
  return 0;
}
