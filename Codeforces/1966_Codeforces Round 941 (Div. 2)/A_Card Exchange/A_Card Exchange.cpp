#include <bits/stdc++.h>
using namespace std;

int a[105];

void solve() {
  memset(a, 0, sizeof(a));
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    a[t]++;
  }
  int mx = 0;
  for (int i = 0; i < 105; i++) {
    mx = max(mx, a[i]);
  }
  if (mx >= k) {
    cout << k - 1 << "\n";
    return ;
  }

  cout << n << "\n";


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
