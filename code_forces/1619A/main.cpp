#include<iostream>
using namespace std;

void squareString(string s) {
  int len = s.length();
  int flag = true;
  if (len % 2 != 0) {
    flag = false;
  }
  else {
    int mid = len / 2;
    for (int i = 0; i < mid; i++) {
      if (s[i] != s[i + mid]) flag = false;
    }
  }
  if (flag) cout << "YES";
  else cout << "NO";
  cout << endl;
}

int main () {
  int n;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    squareString(s);
  }
  return 0;
}
