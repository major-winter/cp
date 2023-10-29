#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    int len = s.size();
    vector<char> arr;
    int days = 1;
    int i = 0;
    int diff = 0;
    while(len--) {
      for (int j = i; j < s.size(); ++j) {
        if (find(arr.begin(), arr.end(), s[j]) == arr.end()) {
          diff++;
          arr.push_back(s[j]);
        }
        i += diff;
        if(diff > 3) {
          days++;
          diff = 1;
          arr.clear();
          arr.push_back(s[j]);
        }
      }
    }
    cout << days << '\n';
  }
  return 0;
}
