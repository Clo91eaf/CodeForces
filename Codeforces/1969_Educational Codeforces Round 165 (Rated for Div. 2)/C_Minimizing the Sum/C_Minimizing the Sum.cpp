#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[300005];
ll dp[300005][15];

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= k; j++) {
      dp[i][j] = dp[i - 1][j] + a[i];
      ll vmin = a[i];
      for (int d = 0; d <= j && i - d >= 1; d++) {
        dp[i][j] = min(dp[i][j], dp[i - d - 1][j - d] + (d + 1) * vmin);
        if (i - d - 1 >= 1)
          vmin = min(vmin, a[i - d - 1]);
      }
    }
  }
  cout << dp[n][k] << '\n';
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