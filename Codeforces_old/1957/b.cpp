#include <bits/stdc++.h>
using namespace std;

int pow2[32];

void solve() {
  int n, k;
  cin >> n >> k;
  if (n == 1) {cout << k << "\n"; return;}
  int t;
  for (int i = 0; i < 32; i++) {
    if ((1 << i) > k) {
      t = i - 1;
      break;
    }
  }
  cout << ((1 << t) - 1) << " ";
  cout << k - ((1 << t) - 1) << " ";
  for (int i = 0; i < n - 2; i++) cout << 0 << " ";
  cout << "\n";
}

int main() {
  for (int i = 0; i < 32; i++) {
    pow2[i] = 1 << i;
  }

  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}