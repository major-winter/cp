#include<iostream>
using namespace std;

void insertAsc (int a[], int n, int x) {
  int j = n;
  while (j > 0) {
    if (a[j - 1] <= x) break;
    a[j] = a[j - 1];
    j--;
  }
  a[j] = x;
}

void insertSort (int a[], int n) {
  for (int i = 0; i < n; i++) insertAsc(a, i, a[i]);
}

int main () {
  int n;
  cin >> n;
  int a[1000];
  int b[1000];
  int c[1000];
  int j = 0;

  for (int i = 0; i < n; i++) cin >> a[i];

  insertSort(a, n);

  for (int i = 0; i < n; i++) {
    if (j == 0) {
      b[j] = a[i];
      c[j] = 1;
      j++;
      continue;
    }
    if (b[j - 1] == a[i]) c[j - 1]++;
    else {
      b[j] = a[i];
      c[j] = 1;
      j++;
    }
  }

  int max = 0;
  for (int i = 0; i < j; i++) {
    if (c[i] > max) max = c[i];

  }
  cout << max << " " << j << endl;
  return 0;
}
