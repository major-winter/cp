#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  string n; 
  string pi = "3141592653589793238462643383279";
  while(t--) {
    cin >> n;
    int count = 0;
    for (int i = 0; i < n.size(); ++i) {
      if (n[i] == pi[i]) {
        count++;
      } else
        break;
    }
    cout << count << '\n';
  }
  return 0;
}


