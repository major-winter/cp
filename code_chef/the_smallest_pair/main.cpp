#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &a) {
  for (int i = 1; i < a.size(); i++) {
    int j = i - 1;
    int key = a[i];
    while (j >= 0 && key < a[j]) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

int sum(vector<int> &a) {
  insertSort(a);
  return a[0] + a[1];
}

int main() {
  int t, n, x;
  cin >> t >> n;
  vector<int> a;
  while (t--) {
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> x;
      a.push_back(x);
    }
    sum(a);
  }
  return 0;
}
