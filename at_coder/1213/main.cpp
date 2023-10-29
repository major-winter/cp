#include <bits/stdc++.h>
using namespace std;

vector<string> memo(100000, "0");
string solve(int s) {
  if (s == 1)
    return "1";
  //if (s == 2)
    //return "1 2 1";
    
  if (memo[s] == "0")
    memo[s] = solve(s - 1) + ' ' + to_string(s) + ' ' + solve(s - 1);

  return memo[s];
}

int main() {
  int s;
  cin >> s;
  cout << solve(s);
  return 0;
}
