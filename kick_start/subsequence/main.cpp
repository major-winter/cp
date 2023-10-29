#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string& s1, string& s2,int& count, int& diff, int i, int j) {
  int lenS1 = s1.length();
  int lenS2 = s2.length();
  if (i == lenS1 || j == lenS2) {
    if (count == lenS1) {
      if (j < lenS2) {
        diff = lenS2 - lenS1;
      }
      return true;
    }
    return false;
  }

  if (s1[i] == s2[j]) {
    i += 1;
    j += 1;
    count += 1;
   return isSubsequence(s1, s2, count, diff, i , j);
  }
  if (s1[i] != s2[j]) {
    j += 1;
    diff += 1;
    return isSubsequence(s1, s2, count, diff, i , j);
  }

  return false;
}

int main() {
  int t;
  cin >> t;
  int i = 0;
  while(i < t) {
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    int diff = 0;
    if (isSubsequence(s1, s2, count, diff ,0,0)) {
      printf("Case #%d: %d\n", i + 1, diff);
      //cout << diff << '\n';
    }
    else
      //cout << "IMPOSSIBLE\n";
      printf("Case #%d: %s\n", i + 1, "IMPOSSIBLE");
    i++;
    }

  return 0;
}
