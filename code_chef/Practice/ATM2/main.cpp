#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
   int n, k;
   cin >> n >> k;
   while(n--) {
     int x;
     cin >> x;
     if ((k - x) >= 0) {
       cout << 1;
       k = k - x;
     }
     else
       cout << 0;
   }
   cout << '\n';
  }
  return 0;
}
