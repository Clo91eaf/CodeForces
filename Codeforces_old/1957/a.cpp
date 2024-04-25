#include <bits/stdc++.h>
using namespace std;

int a[105];

void solve() {
  memset(a, 0, sizeof(a));
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a[t]++;
  }
  int ans = 0;
  for (int i = 1; i <= 100; i++) {
    ans += (a[i] / 3);
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