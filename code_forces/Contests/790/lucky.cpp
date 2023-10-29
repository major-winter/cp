#include <bits/stdc++.h>
#in

using namespace std;

void solve(string s) {
  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < 3; i++) {
    sum1 += (s[i] - '0');
    sum2 += (s[i + 3] - '0');
  }
  if (sum1 == sum2)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}
