#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr) {
  for (auto i : arr) {
    cout << i << ' ';
  }
  cout << '\n';
}

int res = 0;
int solution(vector<int> &arr, int i, int m, int n) {
  if (i == 0) {
    if (arr[i] != 0) {
      int dis = abs(arr[i + 1] - arr[i]);
      if (dis <= 1)
        return 1;
      return 0;
    }
    return m;
  }
  if (arr[i] == 0) {
    for (int x = 1; x <= m; ++x) {
      arr[i] = x;
      int dis = abs(arr[i - 1] - arr[i]) <= 1;
      if (dis && solution(arr, i - 1, m, n)) {
        res += 1;
        cout << res << endl;
      }
      arr[i] = 0;
    }
  } else {
    if (arr[i - 1] != 0) {
      int dis = abs(arr[i - 1] - arr[i]) <= 1;
      if (dis) {
        return solution(arr, i - 1, m, n);
      } else {
        return 0;
      }
    }
  }
  return solution(arr, i - 1, m, n);
}

int solution(vector<int> &arr, int i, int m) {
  // suppose i_th is the last element
  // 0,1,2,...i - 1, i;
  // if arr[i] != 0
  //   |arr[i - 1] - arr[i]| > 1 return 0
  //   |arr[i - 1] - arr[i]| <= 1 && solution(arr, i - 1, m) return 1
  // if arr[i] == 0
  //
  if (i == 0) {
    if (arr[i] == 0)
      return m;
    return 1;
  }

  if (arr[i + 1] != 0 && arr[i] != 0) {
    if (abs(arr[i + 1] - arr[i]) > 1)
      return 0;
    if (abs(arr[i + 1] - arr[i]) <= 1 && solution(arr, i - 1, m) > 0)
      return 1;
  }
  int res = 0;
  if (arr[i] == 0) {
    for (int x = 1; x <= m; ++x) {
      arr[i] = x;
      cout << "f: ";
      printArr(arr);
      res += solution(arr, i, m);
      arr[i] = 0;
    }
  } else {
    res += solution(arr, i - 1, m);
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  cout << solution(arr, n - 1, m, arr[n - 1]) << '\n';
  return 0;
}
