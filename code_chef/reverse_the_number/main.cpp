#include <iostream>
#include <string>
using namespace std;

int reverse(int n) {
  if (n == 0)
    return n;
  int lastDigit = n % 10;
  n = n / 10;
  int temp = 1;
  int m = n;
  while (m > 0) {
    temp *= 10;
    m = m / 10;
  }
  return lastDigit * temp + reverse(n);
}

int main() {
  int t,n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << reverse(n) << endl;
  }
  return 0;
}
