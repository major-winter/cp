#include <bits/stdc++.h>
using namespace std;

vector<char> subset;
void permutation(string s, int i) {
  if (i == s.length()) {
    for (auto it : subset)
      cout << it << ' ';
  }
  else {
    subset.push_back(s[i]);
    permutation(s, i + 1);
    subset.pop_back();
  }

}
int main() {
  string s;
  cin >> s;
  permutation(s, 0);
  return 0;
}
