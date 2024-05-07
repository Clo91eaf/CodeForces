#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n - 2; i ++ )
  {
    cout << i << " " << i << "\n";
  }
  cout << n << " " << n - 1 << "\n";
  cout << n << " " << n << "\n";
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
