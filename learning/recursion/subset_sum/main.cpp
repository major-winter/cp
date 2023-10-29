#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr, int s, int &count) {
  if (s == 0)
    return 0;
  if (arr.size() == 1) {
    if (arr[0] == s) {
      count++;
      return 1;
    }
    else
      return 0;
  }

  int last = arr[arr.size() - 1];
  arr.pop_back();
  int first = solve(arr, s - last, count);
  int second = solve(arr, s, count) + 1;
  return first + second;
}
int main() {
  int n, s, x, count = 0;
  cin >> n >> s;
  vector<int> arr;
  int temp = n;
  while(n--) {
    cin >> x;
    arr.push_back(x);
  }
  cout << solve(arr, s, count) << '\n';
  cout << count << '\n';
  return 0;
}
