#include <bits/stdc++.h>
using namespace std;

#define i64 long long

void solve() {
  i64 a, b, m;
  cin >> a >> b >> m;
  cout << m / a + m / b + 2 << endl;
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