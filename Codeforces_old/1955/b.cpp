#include <bits/stdc++.h>
using namespace std;

int a[505 * 505];
int b[505 * 505];

void solve() {
  int n, c, d;
  cin >> n >> c >> d;
  for (int i = 0; i < n * n; i++) {
    cin >> a[i];
  }
  sort(a, a + n * n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      b[i * n + j] = a[0] + c * i + d * j;
    }
  }
  sort(b, b + n * n);
  for (int i = 0; i < n * n; i++) {
    if (a[i] != b[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
