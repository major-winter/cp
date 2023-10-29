#include <bits/stdc++.h>
using namespace std;
/*
 *bool isDivBy9(int n)
 *{
 *    // Base cases
 *    if (n == 0 || n == 9)
 *        return true;
 *    if (n < 9)
 *        return false;
 *    // If n is greater than 9, then recur for [floor(n/9) - n%8]
 *    return isDivBy9((int)(n >> 3) - (int)(n & 7));
 *}
 */

void isMultiple(string number, int& sum, int& diff, int& first) {
  if (number.length() <= 0) {
    if (sum % 9 == 0)
      return;
    diff = 9 - (sum % 9);
    return;
  }

  char last = number[number.length() - 1];
  number.pop_back();
    if (number.length() == 0)
      first = last - '0';
  sum = sum + (last) - '0';
  isMultiple(number, sum, diff, first);
}
void isMultipleOfNine(int number, int& sum, int& diff, int& first) {
  if (number == 0) {
    if (sum % 9 == 0)
      return;
    if (sum > 9) {
      int nine = 9;
      while (nine < sum) {
        nine *= 2;
      }
      diff = nine - sum;
    } else
      diff = abs(9 - sum);
    return;
  }

  int digit = number % 10;
  if (number / 10 == 0) {
    first = number;
  }
  number = number  / 10;
  sum += digit;
  isMultipleOfNine(number, sum, diff, first);
}

void insertDigit(int& diff, string& x) {
  char digit = (diff) + '0';
  int i = 0;
  if (diff == 0) {
    x.insert(1, 1, digit);
    return;
  }
  int lenX = x.length();
  while(i < lenX) {
    if (x[i] - '0' > diff ) {
      x.insert(i, 1, digit);
      return;
    }
    i++;
  }
  x.insert(lenX, 1, digit);
}

int main() {
  int t;
  cin >> t;
  int i = 0;
  while(i < t) {
    string x;
    cin >> x;
    int sum = 0;
    int diff = 0;
    int first = 0;
    vector<int> subset;
    isMultiple(x, sum, diff, first);
    insertDigit(diff, x);
    cout << "Case #" << i + 1 << ": " << x << '\n';
    /*
     *if (diff > first || diff == 0) {
     *    printf("Case #%d: %s%d\n", i + 1, x.c_str(), diff);
     *} else {
     *    printf("Case #%d: %d%s\n", i + 1, diff, x.c_str());
     *}
     */
    i++;
  }
  return 0;
}

