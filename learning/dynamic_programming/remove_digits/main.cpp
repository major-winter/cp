#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector
#define modValue 1000000007
#define INF 1000000000

int remove_digits_recur(int n, string str) {
  if (str.size() == 1 && n > 0) return 1;
  int q = INF;
  for (int j = 0; j < str.size() ; ++j ) {
    int c = n - (str[j] - '0');
    if (str[j] - '0' > 0) {
      string s = to_string(c);
      q = min(q,1 + remove_digits_recur(c, s));
    }
  }
  return q;
}
int remove_digits_dp(int n, string& str) {
  vec<int> T(n + 2, INF);
  int sum = 0;
  for (int i = 0 ; i < 10 ; ++i) {
    T[i] = 1;
  }
  while(str.size() > 0 && n > 0) {
    for (int i = str.size() - 1; i >= 0; --i) {
      int c = n - (str[i] - '0');
      string s;
      if (str[i] - '0' > 0) {
        s = to_string(c);
        T[i] = min(T[i],1 + T[c]);
        str = s;
        n = c;
      }
    }
  }
  return T[0];
}

int main() {
  int n;
  cin >> n;
  string str = to_string(n);
  // cout << remove_digits_recur(n, str) << '\n';
  cout << remove_digits_dp(n, str) << '\n';
  return 0;
}
