#include <bits/stdc++.h>
using namespace std;

long long dp[300005];
const long long mod = 1e9 + 7;

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    int c, r;
    cin >> c >> r;
    n -= c == r ? 1 : 2;
  }
  cout << dp[n] << "\n";
}

int main() {
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 3;
  for (long long i = 3; i < 300005; i++)
    dp[i] = (dp[i - 1] + (2 * i - 2) * dp[i - 2]) % mod;
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}