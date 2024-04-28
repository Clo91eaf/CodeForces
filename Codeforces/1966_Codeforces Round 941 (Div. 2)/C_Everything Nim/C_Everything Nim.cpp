#include <bits/stdc++.h>
using namespace std;

int a[200005];

void solve() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  std::sort(a, a + n);
  
  int* end = std::unique(a, a + n);
  int newSize = end - a;
  for (int i = newSize - 1; i >= 1; i--) {
    a[i] -= a[i-1];
  }

  int cnt_1 = 0;
  for (int i = 0; i < newSize; i++) {
    if (a[i] == 1)
      cnt_1++;
    else
      break;
  }
  if (newSize == cnt_1)
    std::cout << (newSize % 2 == 0 ? "Bob" : "Alice") << "\n";
  else {
    std::cout << (cnt_1 % 2 == 0 ? "Alice" : "Bob") << "\n";
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
