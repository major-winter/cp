#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
#define pb push_back
#define ll long long
#define vec vector
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define ft front()
#define bk back()
void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
  if (sz(name)) {
    freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> starts(N);
  vector<int> ends(N);
  vector<int> buckets(N);
  int earliest = 1000000;
  int last = 0;
  for (int i = 0; i < N; ++i) {
    cin >> starts[i] >> ends[i] >> buckets[i];
    if (starts[i] < earliest) earliest = starts[i];
    if (ends[i] > last) last = ends[i];
  }
  int bucket_used = 0;
  int bucket_available = 0;
  for (int ) {

  }
  int ind = distance(starts.begin(), find(starts.begin(), starts.end(), earliest));
  return 0;
}
