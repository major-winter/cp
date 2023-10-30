// #include <bits/stdc++.h>
// using namespace std;
// #define ln "\n"
// #define pb push_back
// #define ll long long
// #define vec vector
// #define all(n) (n).begin(), (n).end()
// #define rall(x) x.rbegin(), x.rend()
// #define sz(x) (int)(x).size()
// #define ft front()
// #define bk back()
// #define bg(x) begin(x)
// #define sor(x) sort(all(x))
// #define rsz resize
// #define ins insert
// #define eb emplace_back
// #define FOR(i, a, b) for (int i = (a); i < (b); ++i)
// #define F0R(i, b) FOR(i, 0, b)
// #define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
// #define R0F(i, b) ROF(i, 0, b)
// #define rep(a) F0R(_, a)
// #define fi(n, a) find(all(n), a)
// #define IO(NAME)                    \
//     cin.tie(0)->sync_with_stdio(0); \
//     if (fopen(NAME ".in", "r"))     \
//         freopen(NAME ".in", "r", stdin), freopen(NAME ".out", "w", stdout);
// int main()
// {
//     int N;
//     cin >> N;
//     vec<int> G;
//     vec<int> L;

//     FOR(i, 0, N)
//     {
//         char ch;
//         int p;
//         cin >> ch >> p;
//         if (ch == 'L')
//         {
//             L.pb(p);
//         }
//         else
//         {
//             G.pb(p);
//         }
//     }
//     int res = 1000000000;
//     int liars = 0;
//     int g = *min_element(G.begin(), G.end());
//     int l = *max_element(L.begin(), L.end());
//     if (g < l) {
//         liars = (G.size() - 1 + L.size() - 1);
//     } else {
//         liars = 1;
//     }

//     cout << liars << ln;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<char, int> p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int liars = 0;
        for (int j = 0; j < n; j++)
        {
            cout << i << ' ' << j << '\n';

            if ((p[j].first == 'L' && p[i].second > p[j].second) || (p[j].first == 'G' && p[i].second < p[j].second))
            {
                liars++;
            }
        }
        ans = min(ans, liars);
    }
    cout << ans;
}