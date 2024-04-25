#include <bits/stdc++.h>
using namespace std;

int a[300005];
int l[300005];
int r[300005];

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (i == 0 || a[i] != a[i-1]) {
      l[i] = 1;
    } else {
      l[i] = l[i-1] + 1;
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    if (i == n - 1 || a[i] != a[i+1]) {
      r[i] = 1;
    } else {
      r[i] = r[i+1] + 1;
    }
  }

  int ans = 0x9999999;

  for (int i = 1; i < n - 1; i++) {
    if (a[i] != a[i-1] && a[i] != a[i+1]) {
      ans = min(ans, min(l[i-1], r[i+1]));
    }
  }

  cout << (ans == 0x9999999 ? -1 : ans) << endl;
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