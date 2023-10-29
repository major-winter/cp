#include <bits/stdc++.h>
using namespace std;

void distinct_sum(int sum, vector<int>& s, int i, set<int>& ans) {
  if (i == s.size()) {
    ans.insert(sum);
    return;
  }
  int t = s[i];
  distinct_sum(sum + t, s, ++i, ans);
  --i;
  distinct_sum(sum, s, ++i, ans);
}

void subset (vector<int>& s, vector<int>&sub, int i) {
  if (i == s.size()) {
    for (auto it : sub)
      cout << it << ' ';
    cout << endl;
    return;
  }
  sub.push_back(s[i]);
  subset(s, sub, ++i);
  --i;
  sub.pop_back();
  subset(s, sub, ++i);
}

int main() {
  vector<int> s{1,2,3};
  vector<int> sub;
  set<int> ans;
  subset(s,sub,0);
  distinct_sum(0, s, 0, ans);
  for (auto it : ans)
    cout << it << ' ';
  cout << endl;
  return 0;
}
