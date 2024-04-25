#include <bits/stdc++.h>
using namespace std;

#define i64 long long
const i64 MAXN = 2e5 + 7;

i64 a[MAXN];
i64 b[MAXN];

void solve() {
  i64 m, n;
  cin >> n >> m;

  for (i64 i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (i64 i = 0; i < n; i++) {
    cin >> b[i];
  }

  i64 sum = 0;
  for (i64 i = n - 1; i >= m; i--)
    sum += a[i] < b[i] ? a[i] : b[i];
  i64 mn = 1e9 + 7;
  i64 sumb = 0;
  for (int i = m - 1; i >= 0; i--) {
    mn = min(mn, a[i] + sumb);
    sumb += b[i];
  }
  cout << sum + mn << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  i64 t;
  cin >> t;
  while (t--) {
    solve();
  }
}