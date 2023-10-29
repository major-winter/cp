#include<iostream>
using namespace std;

string idAndShip(char ch) {
  if (ch == 'B' || ch == 'b')
    return "BattleShip";
  else if (ch == 'C' || ch == 'c')
    return "Cruiser";
  else if (ch == 'D' || ch == 'd')
    return "Destroyer";
  else
    return "Frigate";
}
int main () {
  int n;
  cin >> n;
  char ch;
  for (int i = 0; i < n; i++) {
    cin >> ch;
    cout << idAndShip(ch) << endl;
  }
  return 0;
}
