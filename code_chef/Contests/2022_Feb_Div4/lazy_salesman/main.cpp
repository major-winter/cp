#include <bits/stdc++.h>
using namespace std;

int maxHoliday(vector<int>& a, int w) {
  sort(a.rbegin(), a.rend());
  int sum = 0, count = 0;
  for (auto it : a) {
    sum += it;
    count++;
    if (sum >= w) {
      break;
    }
  }
  return count;
}
int main() {
  int t;
  cin >> t;
  int n, w;
  while(t--) {
    cin >> n >> w;
    vector<int> a;
    int t = n;
    while(t--) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    cout << n - maxHoliday(a, w) << '\n';
  }
  
  return 0;
}
