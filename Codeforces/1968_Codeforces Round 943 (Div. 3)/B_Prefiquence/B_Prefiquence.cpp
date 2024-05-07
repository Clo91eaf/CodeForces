#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a;
  cin >> b;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      i++;
    }
    j++;
  }
  cout << i << "\n";
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
