#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 1e9+7;

ll p[200005];

struct node {
  ll p, a;
};

node b[200005];
node s[200005];

bool cmp(node a, node b) {
  return a.p < b.p;
}

void solve() {
  ll n, k, pb, ps;
  cin >> n >> k >> pb >> ps;
  for (ll i = 1; i <= n; i++) {
    cin >> p[i];
    b[i].p = inf;
    s[i].p = inf;
  }

  ll t;
  for (ll i = 1; i <= n; i++) {
    cin >> t;
    b[i].a = t;
    s[i].a = t;
  }

  ll old_pb = pb;
  ll old_ps = ps;
  for (ll i = 0; i < n; i++) {
    b[pb].p = i;
    if (p[pb] == old_pb) {
      break;
    }
    pb = p[pb];
  }
  for (ll i = 0; i < n; i++) {
    s[ps].p = i;
    if (p[ps] == old_ps) {
      break;
    }
    ps = p[ps];
  }

  sort(b + 1, b + n + 1, cmp);
  sort(s + 1, s + n + 1, cmp);

  for (ll i = 1; i <= n; i++) {
  }

  ll bans = b[1].a * k, sans = s[1].a * k;
  ll bsum = b[1].a, ssum = s[1].a;
  for (ll i = 2; i <= k && i <= n && b[i].p != inf; i++) {
    bans = max(bans, bsum + b[i].a * (k - i + 1));
    bsum += b[i].a;
  }
  for (ll i = 2; i <= k && i <= n && s[i].p != inf; i++) {
    sans = max(sans, ssum + s[i].a * (k - i + 1));
    ssum += s[i].a;
  }

  if (bans > sans) {
    cout << "Bodya\n";
  } else if (bans < sans) {
    cout << "Sasha\n";
  } else {
    cout << "Draw\n";
  }
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
