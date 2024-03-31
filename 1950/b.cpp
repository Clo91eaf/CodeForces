#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n * 2; i++) {
    for (int j = 0; j < n * 2; j++) {
      if ((j / 2) % 2 == (i / 2) % 2) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
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