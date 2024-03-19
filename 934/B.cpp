#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int a[MAXN];
int b[MAXN];

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  sort(a, a + n);
  sort(b, b + n);
  int t = k*2;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1] && t) {
      cout << a[i] << " " << a[i] << " ";
      t -= 2;
    }
  }
  if (a[0] != a[1] && t) {
    cout << a[0] << " ";
    t--;
  }
  for (int i = 1; i < n - 1; i++) {
    if (a[i] != a[i + 1] && a[i] != a[i - 1] && t) {
      cout << a[i] << " ";
      t--;
    }
  }
  if (a[n - 1] != a[n - 2] && t) {
    cout << a[n - 1] << " ";
    t--;
  }
  cout << "\n";
  t = k*2;
  for (int i = 1; i < n; i++) {
    if (b[i] == b[i - 1] && t) {
      cout << b[i] << " " << b[i] << " ";
      t -= 2;
    }
  }
  if (a[0] != a[1] && t) {
    cout << a[0] << " ";
    t--;
  }
  for (int i = 1; i < n - 1; i++) {
    if (a[i] != a[i + 1] && a[i] != a[i - 1] && t) {
      cout << a[i] << " ";
      t--;
    }
  }
  if (a[n - 1] != a[n - 2] && t) {
    cout << a[n - 1] << " ";
    t--;
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}