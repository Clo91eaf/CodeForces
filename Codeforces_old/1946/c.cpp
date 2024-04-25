#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> adj[200005];

int ans;

int dfs(int v, int p, int sz) {
  int ret = 1;
  for (int u : adj[v]) {
    if (u == p) continue;
    ret += dfs(u, v, sz);
  }
  // if size of subtree is greater than sz
  // then cut the subtree
  if (ret >= sz && p != v) { // if p == v then v is root
    ans++;
    return 0;
  }
  return ret;
}

bool check(int sz) {
  ans = 0;
  int res = dfs(1, 1, sz);
  return (ans > k || (ans == k && res >= sz));
}

void solve() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
    adj[i].clear();
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int low = 1, high = n;
  while (high - low > 1) {
    int mid = (low + high) / 2;
    if (check(mid)) {
      low = mid;
    } else {
      high = mid;
    }
  }

  cout << low << "\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}