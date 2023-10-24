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
  IO("censor");

  string S, T;
  cin >> S >> T;

  while (true) {
    auto substr = S.find(T);
    if (substr != string::npos) {
      S.erase(substr, T.length());
    } else {
      break;
    }
  }
  cout << S << ln;
  return 0;
}
