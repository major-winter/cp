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
  IO("diamond");
  int N, K;
  cin >> N >> K;
  vec<int> diamonds(N);

  for (int &d : diamonds)
    cin >> d;
  /**
   * sorting in desendence guarantee the smallest elements are leftwards
   *
   */
  // sor(diamonds);

  int display = 0;
  FOR(i, 0, N) {
    int cur = 0;
    // vec<int> box;
    /**
     * diamonds[i] will always be the smallest element in box
     * without sorting, diamonds[i] can be the middle value -> this leads to the
     * distance between the smallest one and the largest one may be larger than
     * K even though their distance to diamonds[i] can be less than or equal to
     * K
     */
    // box.pb(diamonds[i]);
    FOR(j, 0, N) {
      if (diamonds[j] >= diamonds[i] && diamonds[j] - diamonds[i] <= K) {
        // box.pb(diamonds[j]);
        cur++;
      }
    }
    // int box_size = box.size();
    display = max(display, cur);
  }
  cout << display << ln;
  return 0;
}
