#include <bits/stdc++.h>

void solve() {
  std::string s;
  std::cin >> s;

  for (int len = s.length() / 2; len > 0; len--) {
    int cnt = 0;
    for (int i = 0, j = len; j < s.length(); i++, j++) {
      if (s[i] != s[j] && s[i] != '?' && s[j] != '?') {
        cnt = 0;
      } else {
        cnt++;
      }
      if (cnt >= len) {
        std::cout << len * 2 << "\n";
        return;
      }
    }
  }
  std::cout << 0 << "\n";
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}