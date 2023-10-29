#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
void canJump(vector<int>& arr, int n, int x, int i) {
  if (i == n) {
    int sum = 0;
    for(auto it : subset) {
      sum += it;
    }
    if ( sum == x )
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  else {
    subset.push_back(arr[i]);
    canJump(arr, n, x, i+2);
    subset.pop_back();
    canJump(arr, n, x, i+2);
  }

}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> arr;
  int t = n;
  while(t--) {
    int a, b;
    cin >> a >> b;
    arr.push_back(a);
    arr.push_back(b);
  }
  canJump(arr, n,x, 0);
  return 0;
}
