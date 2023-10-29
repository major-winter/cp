#include <bits/stdc++.h>
using namespace std;

int n = 3;
vector<int> subset;

void S(int k) {
  if (k == n) {
    for (auto it : subset)
      cout << it << " ";
    cout << '\n';
  }
  else {
    S(k + 1);
    subset.push_back(k);
    S(k + 1);
    subset.pop_back();
  }
}
int main() {
  S(0);
  return 0;
}
