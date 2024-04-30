#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'U') cnt++;
  }
  cout << (cnt % 2 == 0 ? "NO" : "YES") << "\n";
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
