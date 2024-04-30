#include <bits/stdc++.h>
using namespace std;

int p[55];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> p[i];
  for (int i = 1; i <= n; i++) {
    if (p[p[i]] == i) {
      cout << "2\n";
      return;
    }
  }
  cout << "3\n";
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
