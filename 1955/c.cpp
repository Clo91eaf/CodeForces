#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a[200005];

void solve() {
  ll n, k;
  cin >> n >> k;
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  ll t = 0;
  ll s = k / 2 + k % 2;
  ll e = k / 2;
  ll cnt = 0;
  for (t = 0; t < n; t++) {
    if (a[t] <= s) {
      s -= a[t];
      a[t] = 0;
      cnt++;
    } else {
      a[t] -= s;
      break;
    }
  }

  for (ll i = n - 1 ; i >= t; i--) {
    if (a[i] <= e) {
      e -= a[i];
      a[i] = 0;
      cnt++;
    } else {
      a[i] -= e;
      break;
    }
  }

  // for (ll i = 0; i < n; i++ ) {
  //   cout << a[i] << " ";
  // }
  // cout << "\n";

  cout << cnt << "\n";
}

ll main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
}