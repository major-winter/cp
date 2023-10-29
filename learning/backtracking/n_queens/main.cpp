#include <bits/stdc++.h>
using namespace std;

int board[4][4];

bool isSafe(int row, int col) {
  int i, j;
  for (i = 0; i < col; i++)
    if (board[row][i])
      return false;

  for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
    if (board[i][j])
      return false;
  }

  for (i = row, j = col; j >= 0 && i < 4; i++, j--) {
    if (board[i][j])
      return false;
  }

  return true;
}

bool solveNQueens(int col) {
  if (col == 4) {
    return true;
  }

  for (int i = 0; i < 4; i++) {
    if (isSafe(i, col)) {
      board[i][col] = 1;
      if (solveNQueens(col + 1))
        return true;
      board[i][col] = 0;
    }
  }
  return false;
}

void nQueens() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << board[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() {
  solveNQueens(0);
  nQueens();
  return 0;
}
