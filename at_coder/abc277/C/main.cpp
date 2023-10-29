#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, vector<int>> adj;
  for (int i = 0 ; i < N; ++i) {
    int A, B;
    cin >> A >> B;
    adj[A].push_back(B);
    adj[B].push_back(A);
  }
  int res = 1;
  queue<int> que;
  set<int> visited;
  que.push(1);
  while(!que.empty()) {
    int front = que.front(); que.pop();
    for (auto it : adj[front]) {
      if (visited.count(it) == 0) {
        visited.insert(it);
        res = max(res, it);
        que.push(it);
      }
    }
  }
  cout << res << '\n';
  return 0;
}
