#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string s;
  cin >> s;
  ll l = 0, r = 0;
  ll ans = 0;
  while (s[l] == '0') {
    l++;
  }
  r = l + 1;
  while (r < s.length()) {
    if (s[r] == '1') {
      r++;
      continue;
    }
    ans += r - l + 1;
    r++;
    l++;
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
