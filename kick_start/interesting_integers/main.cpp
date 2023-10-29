#include<bits/stdc++.h>
using namespace std;

long sum (long num) {
  string numStr = to_string(num);
  int sum = 0;

  int i = 0;
  int j = numStr.length() - 1;
  while(i < j) {
    sum = sum + (numStr[i] - '0') + (numStr[j] - '0');
    i++;
    j--;
  }
  if (i == j)
    sum = sum + (numStr[i] - '0');
  /*
   *for (int i = 0; i < numStr.length(); i++) {
   *  sum = sum + (numStr[i] - '0');
   *}
   */

  return sum;
/*
 *  if (num / 10 == 0) {
 *    return num;
 *  }
 *
 *  int last = num % 10;
 *  return last + sum(num / 10);
 */
}

long product(long num) {
  // iterative

  string numStr = to_string(num);
  int prod = 1;

  int i = 0;
  int j = numStr.length() - 1;
  while(i < j) {
    prod = prod * (numStr[i] - '0') * (numStr[j] - '0');
    i++;
    j--;
  }
  if (i == j)
    prod = prod * (numStr[i] - '0');
  return prod;

  /* recursion
   *if (num / 10 == 0) {
   *  return num;
   *}
   *int last = num % 10;
   *return last * product(num / 10);
   */
}

int main () {
  int t;
  cin >> t;
  int i = 1;
  while (i <= t) {
    long a, b;
    cin >> a >> b;
    bool isInteresting = true;
    int count = 0;
    for(int i = a; i <= b; i++) {
      long prod = product(i);
      long su = sum(i);
      if (prod % su == 0)
        count++;
    }
    cout << "Case #"  << i << ": " << count << '\n';
    i++;

  }
  return 0;
}
