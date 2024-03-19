#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<int> sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    sum[i] = s[i - 1] - '0' + sum[i - 1];
  }
  int i = n / 2;
  while (i >= 0 && i <= n) {
    if (sum[i] <= i / 2 && (sum[n] - sum[i]) >= (n - i + 1) / 2) {
      cout << i << endl;
      return;
    }
    i = n - i;
  
    if (i > n)
      break;
    // cerr << i << endl;
    if (sum[i] <= i / 2 && (sum[n] - sum[i]) >= (n - i + 1) / 2) {
      cout << i << endl;
      return;
    }
    i = n - i - 1;
    // cerr << i << endl;
  }
  cout << 0 << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}