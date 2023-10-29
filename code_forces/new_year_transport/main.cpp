#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector
int main() {
  int n, des;
  cin >> n >> des;
  vec<int> a(n + 1);
  for (int i = 1 ; i <= n ; ++i) {
    cin >> a[i];
  }

  int ans = 1;
  while(true) {
    ans += a[ans];
    if (ans == des) {
      cout << "YES" << ln;
      return 0;
    }
    if (ans > des) {
      cout << "NO";
      return 0;
    }
  }
  return 0;
}

