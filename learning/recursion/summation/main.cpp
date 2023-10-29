#include <bits/stdc++.h>
using namespace std;

long long summation(vector<int> &array) {
  if (array.size() == 1)
    return array[0];
  int last = array[array.size() - 1];
  array.pop_back();
  return summation(array) + last;
}
int main() {
  int n;
  cin >> n;
  vector<int> array;
  while (n--) {
    int x;
    cin >> x;
    array.push_back(x);
  }
  cout << summation(array);
  return 0;
}
