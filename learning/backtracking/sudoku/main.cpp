#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<int> &row, int col, int number) {
  for (int i = 0; i < 9; i++) {
    if (number  == row[i])
      return false;
  }
  return true;
}

void sudoku(vector<int> &row, int col) {
  if (col == row.size()) {
    return;
  }

  if (row[col] > 0) {
    sudoku(row, col + 1);
    return;
  }

  for (int i = 1; i <= 9; i++) {
    if(isSafe(row, col, i)) {
      row[col] = i;
      (sudoku(row, col + 1));
    }
  }
}

int main () {
  vector<int> row = {2, 4, 9, 0, 0, 0, 0, 6, 8};
  sudoku(row, 0);
  for (auto it : row)
    cout << it << ' ';
  return 0;
}
