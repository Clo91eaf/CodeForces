#include <bits/stdc++.h>
using namespace std;

int a[105];

void solve() {
  int k, q;
  cin >> k >> q;
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  int mn = a[0];
  for (int i = 0; i < k; i++) {
    mn = min(mn, a[i]);
  }
  while (q--) {
    int n;
    cin >> n;
    cout << min(mn-1, n) << " ";
  }
  cout << "\n";

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