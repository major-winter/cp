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
  IO("tttt");
  vector<string> input;

  F0R(i, 3) {
    string str;
    cin >> str;
    input.pb(str);
  }
  set<int> individual_win, team_win;
  vec<char> row, col, diagonal;

  F0R(r, 3) {
    row.clear();
    F0R(i, 3) {
      // r1 : A B C
      char ch = input[r][i];
      auto c = fi(row, ch);
      if (c == row.end()) {
        row.pb(ch);
      }
    }
    if (row.size() == 1) {
      individual_win.ins(row[0]);
    }
    if (row.size() == 2) {
      team_win.ins(row[0]);
      team_win.ins(row[1]);
    }
  }

  F0R (r, 3) {
    col.clear();
    F0R (i, 3) {
      // r1 : A B C
      // auto c = find(col.begin(), col.end(), input[i][r]);
      char ch = input[i][r];
      auto c = fi(col, ch);
      if (c == col.end()) {
        col.pb(input[i][r]);
      }
    }
    if (col.size() == 1)
      individual_win.ins(col[0]);
    if (col.size() == 2) {
      team_win.ins(row[0]);
      team_win.ins(row[1]);
    }
  }

  F0R(i, 3) {
    char ch = input[i][i];
    auto c = fi(diagonal, ch);
    if (c == diagonal.end()) {
      diagonal.pb(ch);
    }
  }

  if (sz(diagonal) == 1)
    individual_win.ins(diagonal[0]);
  if (sz(diagonal) == 2) {
    team_win.ins(diagonal[0]);
    team_win.ins(diagonal[1]);
  }

  diagonal.clear();
  int r = 0;
  int i = 2;
  F0R(x, 3) {
    char ch = input[r++][i--];
      auto c = fi(diagonal, ch);
      if (c == diagonal.end()) {
        diagonal.push_back(ch);
      }
  }
  if (diagonal.size() == 1)
    individual_win.insert(diagonal[0]);
  if (diagonal.size() == 2) {
    team_win.insert(diagonal[0]);
    team_win.insert(diagonal[1]);
  }
  cout << individual_win.size() << ln << (team_win.size() + 1) / 2;
  return 1;
}
