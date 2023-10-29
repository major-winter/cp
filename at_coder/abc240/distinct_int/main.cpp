#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  int i = 0;
  while (n--) {
    int x;
    cin >> x;
    a.push_back(x);
    i++;
  }

  sort(a.begin(), a.end());
  int count = 1;

  for (int i = 1; i < a.size(); i++) {
    if (a[i] != a[i - 1])
      count++;
  }
  cout << count;
  return 0;
}
