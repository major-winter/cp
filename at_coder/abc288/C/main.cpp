#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> adj(N, vector<int>());
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<bool> visited(N);
  int S = 0; // Numbers of connected components

  for (int i = 0; i < N; ++i) {
    if (!visited[i]) {
      S++;
      queue<int> que;
      que.push(i);
      while (!que.empty()) {
        int front = que.front();
        que.pop();
        for (auto v : adj[front]) {
          if (!visited[v]) {
            visited[v] = true;
            que.push(v);
          }
        }
      }
    }
  }

  cout << M - N + S << '\n';

  return 0;
}
