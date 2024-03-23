#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[200005];
int sum[200005];
int MOD = 1e9 + 7;

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
    sum[i] = sum[i - 1] + a[i];
  int min = sum[0];
  int mxsum = 0;
  for (int i = 1; i <= n; i++) {
    mxsum = max(mxsum, sum[i] - min);
    if (min > sum[i])
      min = sum[i];
  }

  // cout << mxsum << "\n";

  int ans = (sum[n] - mxsum + MOD) % MOD;
  for (int i = 0; i < k; i++) {
    mxsum = mxsum * 2 % MOD;
  }
  cout << (ans + mxsum + MOD) % MOD << "\n";

}

int32_t main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}