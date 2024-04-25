#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) sum += (2 * i - 1) * i;
  cout << sum << " " << 2 * n << "\n";
  for (int i = n; i >= 1; i--) {
    cout << 1 << " " << i << " ";
    for (int j = 1; j <= n; j++) cout << j << " ";
    cout << "\n";
    cout << 2 << " " << i << " ";
    for (int j = 1; j <= n; j++) cout << j << " ";
    cout << "\n";
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