#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector

int main() {
  int n;
  cin >> n;
  map<string, int> goals;
  string ans;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    goals[s] = ++goals[s];
    if (goals[s] >= (n + 1) / 2) {
      cout << s << ln;
      return 0;

    }  }
  return 0;
}
