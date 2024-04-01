#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + 1 != c) {
    cout << -1 << "\n";
    return;
  }

  queue<int> q;
  q.push(0);
  int ans = 0;
  while (!q.empty()) {
    ans = q.front();
    q.pop();
    if (a) {
      q.push(ans + 1);
      q.push(ans + 1);
      a--;
    } else if (b) {
      q.push(ans + 1);
      b--;
    }
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