#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;

const int Z = 30;
int pref[Z][maxn][2];
int suff[Z][maxn][2];

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 0; i < Z; i++)
    suff[i][n + 1][0] = suff[i][n + 1][1] = 0;
  for (int i = 0; i < Z; i++) {
    for (int j = 1; j <= n; j++) {
      int t = !!(a[j] & (1 << i));
      for (int k = 0; k < 2; k++)
        pref[i][j][k] = (t == k) + pref[i][j - 1][k ^ t];
    }
    for (int j = n; j >= 1; j--) {
      int t = !!(a[j] & (1 << i));
      for (int k = 0; k < 2; k++)
        suff[i][j][k] = (t == k) + suff[i][j + 1][k ^ t];
    }
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    int z = 31 - __builtin_clz(a[i]);
    ans += 1ll * pref[z][i - 1][1] * (1 + suff[z][i + 1][0]);
    ans += 1ll * (1 + pref[z][i - 1][0]) * suff[z][i + 1][1];
  }
  cout << ans << "\n";
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