#include<iostream>
using namespace std;

void insertAsc(string a[], int n, string x) {
  int j = n;
  while (j > 0) {
    if (a[j - 1] <= x) break;
    a[j] = a[j - 1];
    j--;
  }
  a[j] = x;
}

void insertSort (string a[], int n) {
  for (int i = 0; i < n; i++) {
    insertAsc(a, i, a[i]);
  }
}

int main () {
  string s;
  getline(cin, s);
  string a[100];
  int j = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] != '+') {
      a[j] = s[i];
      j++;
    }
  }
  insertSort(a, j);
  for (int i = 0; i < j; i++) {
    cout << a[i];
    if (i < j - 1) cout << "+";
  }
  return 0;
}
