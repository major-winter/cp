#include<iostream>
#include<string>
using namespace std;

string ans (int x1, int v1, int x2, int v2) {
  if (v1 <= v2) return "NO";
  if ((x2 - x1) % (v1 - v2) == 0) return "YES";
  return "NO";
}
int main () {
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  cout << ans (x1, v1, x2, v2);
  return 0;
}
