#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 5;
int a[maxn];

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int ans = 0;
  for (int i = 1; i < n; i++)  {
    if (a[i] == a[i-1]) ans++;
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