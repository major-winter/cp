#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

void dfs (vector<int> adj[], int M, vector<int> &visited, int v) {
  for (int i = 0; i <= M; ++i) {
    visited[v] = true;
    cout << v << ' ';
    for (auto it : adj[i]) {
      if (!visited[it]) {
        visited[it] = true;
        dfs(adj, M, visited, it);
      }
    }
  }
}
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> adj[M];
  rep(i, M) {
    int u, v;
    cin >> u >> v;

    cout << u << "->" << v << '\n';
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<int> visited(N, 0);
  dfs(adj, M, visited, adj[0][0]);
  return 0;
}
