#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  cout << 1000 << " ";
  int sum = 1000;
  for (int i = 1; i < n; i++ )
  {
    int t;
    cin >> t;
    sum += t;
    cout << sum << " ";
  }
  cout << "\n";

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
