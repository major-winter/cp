#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(5);
  cout << s.top() << '\n';
  s.pop();
  cout << s.top() << '\n';
  
  queue<int> q;
  q.push(1);
  q.push(5);
  q.push(4);
  q.pop();
  cout << q.front() << '\n';
  return 0;
}
