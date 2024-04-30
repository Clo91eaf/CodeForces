#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll maxn = 2e5;
ll a[maxn + 5];

void solve() {
  ll n, k;
  cin >> n >> k;
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  a[n] = 1e12;
  ll tmp = 0;
  ll h = 0;
  ll w = 0;
  if (n == 1) {
    cout << a[0] + k << "\n";
    return;
  }
  ll i = 1;
  for (; i < n; i++) {
    tmp += i * (a[i] - a[i - 1]);
    if (tmp >= k) {
      h = a[i] - (tmp - k + i - 1) / i;
      break;
    }
  }
  if (i == n) {
    ll sum = k;
    for (ll i = 0; i < n; i++)
      sum += a[i];
    h = sum / n;
    w = sum % n;
  } else {
    w = k;
    for (ll i = 0; i < n; i++) {
      if (a[i] < h && w >= (h - a[i])) {
        w -= h - a[i];
      }
    }

    for (ll i = 0; i < n; i++) {
      if (a[i] > h)
        w++;
    }
  }
  // cout << "h" << h << "w" << w << "\n";

  cout << (h - 1) * n + w + 1 << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
}
