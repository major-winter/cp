#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector
#define all(n) (n).begin(), (n).end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int) (x).size()
#define ft front()
#define bk back()
#define bg(x) begin(x)
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define eb emplace_back
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_, a)
#define fi(n, a) find(all(n),a)
#define IO(NAME)                                                               \
  cin.tie(0)->sync_with_stdio(0);                                              \
  if (fopen(NAME ".in", "r"))                                                  \
    freopen(NAME ".in", "r", stdin), freopen(NAME ".out", "w", stdout);

int main() {
  IO("blocks");
  int N;
  cin >> N;
  vec<pair<string, string>> words(N);
  for (auto &w : words)
    cin >> w.first >> w.second;

  vec<int> blocks_needed(26, 0);
  // char - 'a' = 0
  for (auto &w : words) {
    vec<int> first(26, 0);
    vec<int> second(26, 0);
    for (char c : w.first) {
      int index = c - 'a';
      first[index]++;
    }
    for (char c : w.second) {
      int index = c - 'a';
      second[index]++;
    }

    FOR(i, 0, 26) {
      blocks_needed[i] += max(first[i], second[i]);
    }
  }

  for (int v : blocks_needed)
    cout << v << ln;

  return 0;
}
