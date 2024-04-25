#include <bits/stdc++.h>
using namespace std;

int n;
string s;

bool check(int start, int len) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != s[start + i % len]) {
      cnt++;
      if (cnt > 1)
        return false;
    }
  }
  return true;
}

void solve() {
  cin >> n;
  cin >> s;
  for (int len = 1; len <= n; len++) {
    if (n % len != 0)
      continue;
    if (check(0, len)) {
      cout << len << "\n";
      return;
    }
    if (check(n - len, len)) {
      cout << len << "\n";
      return;
    }
  }
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