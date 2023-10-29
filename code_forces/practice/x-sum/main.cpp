#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int rows, cols;
    cin >> rows >> cols;
    int a[rows][cols];
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j)
        cin >> a[i][j];
    }
    int res = 0;

    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        int sum = 0;
        int cellRow = i;
        int cellCol = j;
        while(cellRow >= 0 && cellRow < rows && cellCol >= 0 && cellCol < cols) {
          sum += a[cellRow][cellCol];
          cellRow--;
          cellCol--;
        }
        cellRow = i;
        cellCol = j;
        while(cellRow >= 0 && cellRow < rows && cellCol >= 0 && cellCol < cols) {
          sum += a[cellRow][cellCol];
          cellRow--;
          cellCol++;
        }
        cellRow = i;
        cellCol = j;
        while(cellRow >= 0 && cellRow < rows && cellCol >= 0 && cellCol < cols) {
          sum += a[cellRow][cellCol];
          cellRow++;
          cellCol--;
        }
        cellRow = i;
        cellCol = j;
        while(cellRow >= 0 && cellRow < rows && cellCol >= 0 && cellCol < cols) {
          sum += a[cellRow][cellCol];
          cellRow++;
          cellCol++;
        }
        sum -= a[i][j] * 3;
        res = max(res, sum);
      }
    }
    cout << res << endl;
  }
  return 0;
}
