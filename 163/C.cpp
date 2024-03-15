#include <bits/stdc++.h>

bool a[2][200005];
bool dp[2][200005];

void solve() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  for (int i = 0; i < n; i++) {
    a[0][i] = s[i] == '>';
  }
  std::cin >> s;
  for (int i = 0; i < n; i++) {
    a[1][i] = s[i] == '>';
  }

  dp[0][0] = 1;
  dp[1][0] = 0;

  for (int i = 1; i < n; i++) {
    dp[0][i] = dp[1][i - 1] && a[0][i - 1];
    if (i > 1)
      dp[0][i] |= dp[0][i - 2] && a[0][i - 1];
    dp[1][i] = dp[0][i - 1] && a[1][i - 1];
    if (i > 1)
      dp[1][i] |= dp[1][i - 2] && a[1][i - 1];
  }

  if (dp[1][n - 1]) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}