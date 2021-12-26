#include<bits/stdc++.h>
using namespace std;

void numberOfJumps(vector<int> c, int &count, int &i) {
  if (i <= 0) return;
  if (c[i] == 0 && c[i - 1] == 1) {
    int temp = i - 2;
    if (temp < 0) {
      i -= 1;
    } else {
      i -= 2;
    }
    count++;
  } else if (c[i] == 0 && c[i - 2] == 1) {
    i -= 1;
    count++;
  } else {
    i -= 2;
    count++;
  }
  numberOfJumps(c, count, i);
}

int jumpingOnClouds(vector<int> c) {
  int count, i;
  count = 0;
  i = c.size() - 1;
  numberOfJumps(c, count, i);
  return count;
}

int main () {
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int result = jumpingOnClouds(c);
  cout << result << endl;
  return 0;
}
