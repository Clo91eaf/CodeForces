#include <bits/stdc++.h>
using namespace std;

void solve() {
  string a, b;
  cin >> a >> b;
  int len = a.length();
  int flag = 0;
  for (int i = 0; i < len; i++) {
    if (a[i] == b[i]) continue;
    if (flag == 0 && a[i] != b[i]) {
      if (a[i] > b[i]) flag = 1;
      else flag = 2;
      continue;
    }
    if (flag == 1 && a[i] > b[i] || flag == 2 && a[i] < b[i]) {
      char t = a[i]; a[i] = b[i]; b[i] = t;
    }
  }
  cout << a << endl;
  cout << b << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}