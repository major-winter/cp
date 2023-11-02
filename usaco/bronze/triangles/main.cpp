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
#define fr first
#define se second
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

int area = 1;
bool check_valid(vec<pair<int, int>> &tri)
{
    int x = 0, y = 0;
    area = 1;
    if (tri[0].first == tri[1].first)
    {
        x++;
        area = area * abs(tri[0].second - tri[1].second);
    }
    if (tri[0].second == tri[1].second)
    {
        y++;
        area = area * abs(tri[0].first - tri[1].first);
    }
    if (tri[0].first == tri[2].first)
    {
        x++;
        area = area * abs(tri[0].second - tri[2].second);
    }
    if (tri[0].second == tri[2].second)
    {
        y++;
        area = area * abs(tri[0].first - tri[2].first);
    }
    if (tri[1].first == tri[2].first)
    {
        x++;
        area = area * abs(tri[1].second - tri[2].second);
    }
    if (tri[1].second == tri[2].second)
    {
        y++;
        area = area * abs(tri[1].first - tri[2].first);
    }
    return (x == 1 && y == 1) ? true : false;
}
int main()
{
    IO("triangles");
    int N;
    cin >> N;
    pair<int, int> point;

    vec<pair<int, int>> points(N);

    for (auto &p : points)
    {
        cin >> p.first >> p.second;
    }
    
    vec<pair<int, int>> tri;
    int max_area = 0;
    for (int i = 0; i < N; ++i)
    {
        tri.clear();
        tri.pb(points[i]);
        for (int j = i + 1; j < N; ++j)
        {
            tri.pb(points[j]);
            for (int u = j + 1; u < N; ++u)
            {
                tri.pb(points[u]);
                if (tri.size() == 3 && check_valid(tri))
                {
                    max_area = max(max_area, area);
                }
                tri.pop_back();
            }
            tri.pop_back();
        }
    }

    cout << max_area << ln;
    return 0;
}