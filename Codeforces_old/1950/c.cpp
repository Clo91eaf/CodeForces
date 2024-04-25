#include <bits/stdc++.h>
using namespace std;

void solve() {
  int h, m;
  scanf("%d:%d", &h, &m);
  if (h > 12) {
    printf("%02d:%02d PM\n", h - 12, m);
  } else if (h == 12) {
    printf("%02d:%02d PM\n", h, m);
  } else if (h == 0) {
    printf("%02d:%02d AM\n", h + 12, m);
  } else {
    printf("%02d:%02d AM\n", h, m);
  }
}

int main() {
  // std::ios::sync_with_stdio(false);
  // std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}