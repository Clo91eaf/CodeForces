#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[100005];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a + 1, a + n + 1);
  int median = a[(n + 1) / 2];
  int cnt = 0;
  for (int i = (n + 1) / 2; i <= n; i++) {
    if (a[i] == median) {
      cnt ++;
    } else {
      cout << cnt << "\n";
      return;
    }
  }
  cout << cnt << "\n";
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