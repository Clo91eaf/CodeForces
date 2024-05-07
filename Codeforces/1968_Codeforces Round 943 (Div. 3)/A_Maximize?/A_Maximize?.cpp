#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int x;
  cin >> x;
  int ans = 0;
  int mx = 0;
  for (int i = 1; i < x; i++) {
    if (__gcd(i, x) + i > mx) {
      mx = __gcd(i, x) + i;
      ans = i;
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
