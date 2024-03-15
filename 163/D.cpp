#include <bits/stdc++.h>

bool check(std::string s) {
  for (int i = 0; i < s.length() / 2; i++) {
    if (s[i] != s[s.length() / 2 + i] && s[i] != '?' && s[s.length() / 2 + i] != '?') {
      return false;
    }
  }
  return true;
}

void solve() {
  std::string s;
  std::cin >> s;

  for (int len = s.length() - s.length() % 2; len >= 0; len -= 2) {
    for (int i = 0; i <= s.length() - len; i++) {
      std::string t = s.substr(i, len);
      if (check(t)) {
        std::cout << len << "\n";
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