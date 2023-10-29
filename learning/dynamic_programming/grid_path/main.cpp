#include<bits/stdc++.h>
using namespace std;
#define vec vector
#define ll long long
#define modValue 1000000007

void print(vec<vec<int>> T, int n) {
  for (int i = 0; i < n + 1; ++i ) {
    for (int j = 0; j < n + 1; ++j) {
      cout << T[i][j] << ' ';
    }
    cout << '\n';
  }
}

int grid_path(int i, int j, int n, vec<vec<char>> grid) {
  if (j == n && i == n  && grid[i][j] != '*')
    return 1;
  if (j == n + 1|| i == n + 1) return 0;
  if (grid[i][j] == '*') return 0;
  return (grid_path(i + 1, j, n, grid) + grid_path(i, j + 1, n , grid)) % modValue;
}

int grid_path_dp(vec<vec<char>> grid, int n) {
  vec<vec<int>> T(n + 2, vec<int>(n + 2, 0));
  for (int i = n; i >= 1; --i) {
    for (int j = n; j >= 1; --j) {
      if (i == n && j == n && grid[i][j] != '*') T[i][j] = 1;
      else {
        if (grid[i][j] == '*') continue;
        T[i][j] = (T[i + 1][j] + T[i][j + 1]) % (modValue);
      }
    }
  }
  return T[1][1];
}


int main() {
  int n;
  cin >> n;
  vec<vec<char>> grid(n + 1, vec<char>(n + 1));
  for (int i = 1; i < n + 1; ++i) {
    for (int j = 1; j < n + 1; ++j) {
      cin >> grid[i][j];
    }
  }
  cout << grid_path_dp(grid, n) << '\n';
  // cout << grid_path(1, 1, n, grid) << '\n';
  return 0;
}
