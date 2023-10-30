#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector
#define all(n) (n).begin(), (n).end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define ft front()
#define bk back()
#define bg(x) begin(x)
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define eb emplace_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) FOR(i, 0, b)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, b) ROF(i, 0, b)
#define rep(a) F0R(_, a)
#define fi(n, a) find(all(n), a)
#define IO(NAME)                    \
    cin.tie(0)->sync_with_stdio(0); \
    if (fopen(NAME ".in", "r"))     \
        freopen(NAME ".in", "r", stdin), freopen(NAME ".out", "w", stdout);
int main()
{
    IO("gymnastics");
    int K, N;
    cin >> K >> N;
    // K sessions
    // N cows

    map<pair<int ,int>, int> consistent_pair;
    vec<int> cows(N);
    FOR(i, 0, K) {
        FOR (j, 0, N) {
            cin >> cows[j];
        }

        // cows of session i
        FOR(x, 0, N - 1) {
            FOR(y, x + 1, N) {
                consistent_pair[{cows[x], cows[y]}] += 1;
            }
        }
    }
    int res = 0;
    for (auto it : consistent_pair) {
        if (it.second == K) res++;
    }
    cout << res << ln;
    return 0;
}