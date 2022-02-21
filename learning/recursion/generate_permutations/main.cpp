#include <bits/stdc++.h>
using namespace std;

int n = 3;
vector<int> permutation;
vector<bool> chosen(n);
void search() {
  if (permutation.size() == n) {
    for (auto it : permutation)
      cout << it << " ";
    cout << '\n';
  } else {
    for (int i = 0; i < n; i++) {
      if (chosen[i])
        continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}
int main() {
  search();
  return 0;
}
