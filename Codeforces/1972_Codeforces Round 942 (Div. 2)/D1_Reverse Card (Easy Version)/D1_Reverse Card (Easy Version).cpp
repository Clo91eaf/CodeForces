#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, m;
  cin >> n >> m;
  int cnt = 0;
  for (int j = 1; j <= m; j++) {
    cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (j * __gcd(i, j) % (i + j) == 0) {
        // cout << i << " " << j << "\n";
        cnt++;
      }
    }
    cout << j << " " << cnt << "\n";
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
