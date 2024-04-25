#include <bits/stdc++.h>

int pow(int a, int b) {
  int p = 1;
  for (int i = 0; i < b; i++)
    p *= a;
  return p;
}

int len(int n) {
  int l = 0;
  while (n > 0) {
    n /= 10;
    l++;
  }
  return l;
}

bool check(int a) {
  int t = a % 10;
  while (t >= a % 10 && a > 0) {
    t = a % 10;
    a /= 10;
  }
  return a == 0;
}

void solve() {
  int n;
  std::cin >> n;
  int a[100];
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  for (int i = n - 2; i >= 0; i--) {
    if (a[i] > a[i + 1]) {
      if (check(a[i]) && a[i] % 10 <= a[i + 1]) {
        while (a[i] > 10) a[i] /= 10;
        continue;
      }
      std::cout << "NO\n";
      return;
    }
  }

  std::cout << "YES" << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}