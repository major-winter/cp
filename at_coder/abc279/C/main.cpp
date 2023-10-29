#include <bits/stdc++.h>
using namespace std;

// Editorial
int main() {
  // row H, col W
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(W, vector<char>(H)), T(W, vector<char>(H));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> S[j][i];
    }
  }
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> T[j][i];
    }
  }

  sort(S.begin(), S.end());
  sort(T.begin(), T.end());

  if (S == T) cout << "Yes\n";
  else cout << "No\n";

  return 0;
}
// int main() {
//   int H, W;
//   cin >> H >> W;
//   vector<string> sh (H*2);
//   bool result = true;
//   for (int i = 0; i < H*2; ++i) {
//     cin >> sh[i];
//   }
//   for (int i = 0, j = (H*2 + 1)/2; i < H; ++i,++j) {
//     sort(sh[i].begin(), sh[i].end());
//     sort(sh[j].begin(), sh[j].end());
//     cout << sh[j] << ' ' << sh[i] << endl;
//     if (sh[i] != sh[j]) {
//       result = false;
//       break;
//     };
//   }
//   if (result) cout << "Yes\n";
//   else cout << "No\n";
//   return 0;
// }
