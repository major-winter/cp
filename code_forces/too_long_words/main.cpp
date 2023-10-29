#include <bits/stdc++.h>
using namespace std;

string transform(string s) {
  if (s.length() > 10) {
    char first = s[0];
    char last = s[s.length() - 1];
    int length = s.length() - 2;
    string l = to_string(length);
    return first + l + last;
  }
  return s;
}
int main() {
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    cout << transform(s) << '\n';
  }
  return 0;
}
