#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  int w_max_h = 0, w_max_w = 0, w_min_h = n, w_min_w = m;
  int b_max_h = 0, b_max_w = 0, b_min_h = n, b_min_w = m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      if (s[j] == 'W') {
        w_max_h = max(w_max_h, i);
        w_min_h = min(w_min_h, i);
        w_max_w = max(w_max_w, j);
        w_min_w = min(w_min_w, j);
      } else {
        b_max_h = max(b_max_h, i);
        b_min_h = min(b_min_h, i);
        b_max_w = max(b_max_w, j);
        b_min_w = min(b_min_w, j);
      }
    }
  }
  if (w_max_h == n - 1 && w_min_h == 0 && w_max_w == m - 1 && w_min_w == 0) {
    cout << "YES" << "\n";
    return ;
  }
  if (b_max_h == n - 1 && b_min_h == 0 && b_max_w == m - 1 && b_min_w == 0) {
    cout << "YES" << "\n";
    return ;
  }
  cout << "NO\n";

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
