#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector

int main() {
  int n;
  cin >> n;
  vec<int> s(n);
  deque<int> q;
  int count = 0;
  for (int i = 0; i < n ; ++i) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  for (auto it : s) {
    q.emplace_back(it);
  }
  while(!q.empty()) {
    if (q.back() == 4){
      ++count;
      q.pop_back();
    }
    if (q.back() == 3 && q.front() == 1) {
      ++count;
      q.pop_back();
      q.pop_front();
    } else if (q.back() == 3) {
      ++count;
      q.pop_back();
    }
    if (q.back() == 2 && q.front() == 2) {
      ++count;
      q.pop_back();
      q.pop_front();
    } else if (q.back() == 2) {
      ++count;
      q.pop_back();
    }
    if (q.back() == 1) {
      ++count;
      q.pop_back();
      q.pop_front();
    }
    if (q.empty()) cout << count << ln;
  }
  cout << count << ln;

  return 0;
}
