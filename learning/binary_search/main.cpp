#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binary_search_helper(vector<int>&arr, int el, int left, int right) {
  if (left > right) 
    return -1;
  else {
    int mid = (left + right) / 2;
    if (arr[mid] == el) return mid;
    else if (arr[mid] < el) return binary_search_helper(arr,el, mid + 1, right);
    else return binary_search_helper(arr, el, mid - 1, right);
  }
}

int binary_search(vector<int>&arr, int el) {
  int len = arr.size();
  if (el < arr[0] || el > arr[len - 1]) return -1;
  else
    return binary_search_helper(arr, el, 0, len - 1);
}

int main () {
  int n, el;
  cin >> n >> el;
  vector<int> arr;
  while(n--) {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  cout << binary_search(arr, el) << '\n';
  return 0;
}
