#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  set<pair<int, int>> curr;
  while(Q--) {
    int T, A, B;
    cin >> T >> A >> B;
    if (T == 1)
      curr.insert({A,B});
    else if (T == 2)
      curr.erase({A, B});
    else {
      int ok = curr.count({A, B}) && curr.count({B, A});
      cout << (ok ? "Yes\n" : "No\n");
    }
   
  }
  return 0;
}
