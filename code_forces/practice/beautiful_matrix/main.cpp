#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int x, y;
  vector<int> row(5, 0);
  vector<vector<int>> arr(5, row);
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 1) {
        x = i;
        y = j;
      }
    }
  }

  cout << abs(2 - x) + abs(2 - y) << '\n';
  // for (int i = 0; i < 5; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     cout << arr[i][j];
  //   }
  // }
  //
  // cout << '\n';
  return 0;
}
