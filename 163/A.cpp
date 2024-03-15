#include <bits/stdc++.h>

void solve() {
  int n;
  std::cin >> n;
  if (n % 2 == 1) {
    std::cout << "NO" << std::endl;
    return ;
  }
  std::cout << "YES" << std::endl;
  for (int i = 0; i < n / 2; i++) {
    std::cout << "AAB";
  }
  std::cout << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}