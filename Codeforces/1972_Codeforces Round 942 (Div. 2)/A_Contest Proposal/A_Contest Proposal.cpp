#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[101];
int b[101];

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  int ans = 0;
  int l = 0, r = 0;
  while (l < n && r < n) {
    if (a[l] > b[r]) {
      ans = max(ans, r - l + 1);
      r++;
    } else {
      l++;
      r++;
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
