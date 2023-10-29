#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<string> S;
  int k = K;
  while(N--) {
    string s;
    cin >> s;
    S.push_back(s);
  }
  
  vector<string> s1 = vector<string>(S.begin(), S.begin() + K);
  sort(s1.begin(), s1.end());

  for (int i = 0; i < K; ++i) {
    cout << s1[i] << endl;
  }
  return 0;
}
