#include <bits/stdc++.h>
using namespace std;
long long suffixSum(vector<int> &array, int m, int i) {
  if (m == 1) {
    return array[i];
  }

  int last = array[i];
  array.pop_back();
  return suffixSum(array, m - 1, i - 1) + last;
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> array;
  int temp = n;
  while (temp--) {
    int x;
    cin >> x;
    array.push_back(x);
  }
  cout << suffixSum(array, m, n - 1);
  return 0;
}
