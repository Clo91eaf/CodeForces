#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (b % 3 == 0) {
    cout << a + b / 3 + (c + 2) / 3 << endl;
  } else {
    int t = b % 3;
    if (c + t < 3) {
      cout << -1 << endl;
    } else {
      int sum = 0;
      sum += a;
      sum += b / 3;
      sum++;
      c -= 3 - b % 3;
      sum += (c + 2) / 3;
      cout << sum << endl;
    }
  }
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