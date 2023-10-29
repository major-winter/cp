#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> umap;

void solve(vector<int>& nums, int maxEl) {
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    if (umap.find(nums[i]) == umap.end()) {
      umap[nums[i]] = true;
    }  }

  /*
   *for (auto& it : umap) {
   *  cout << it.first << ' ' << it.second << '\n';
   *}
   */
  for (int i = 0; i < 2000; i++) {
    if (umap.find(i) == umap.end()) {
      cout << i << '\n';
      return;
  }

  }
}
int main() {
  int n;
  cin >> n;
  vector<int> nums;
  while(n--) {
    int x;
    cin >> x;
    nums.push_back(x);
  }

  int maxEl = *max_element(nums.begin(), nums.end());
  solve(nums, maxEl);
  return 0;
}
