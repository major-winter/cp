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
    int N;
    cin >> N;
    vec<int> flowers(N);

    for (int &f : flowers)
    {
        cin >> f;
    }

    int photos = 0;

    FOR(i, 0, N)
    {
        int sum_petals = 0;
        FOR(j, i, N)
        {
            sum_petals += flowers[j];
            bool present = false;
            FOR(k, i, j + 1)
            {
                if (flowers[k] * ((j - i) + 1) == sum_petals)
                {
                    present = true;
                }
            }
            if (present) photos++;
        }
    }

    cout << photos << ln;
    return 0;
}