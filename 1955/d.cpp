#include <bits/stdc++.h>
using namespace std;

int a[200005];
int b[1000005];
int c[200005];
int cnt[1000005];

void solve() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < m; i++) {
    scanf("%d", &c[i]);
    b[c[i]] = 1;
  }
  int l = 0, r = m - 1;
  int ans = 0;
  int sum = 0;
  for (int i = 0; i < m; i++) {
    if (b[a[i]]) {
      if (cnt[a[i]] == 0)
        sum++;
      cnt[a[i]]++;
    }
  }
  if (sum >= k)
    ans++;
  l++, r++;
  while (r < n) {
    if (b[a[l - 1]]) {
      cnt[a[l - 1]]--;
      if (cnt[a[l - 1]] == 0)
        sum--;
    }
    if (b[a[r]]) {
      cnt[a[r]]++;
      if (cnt[a[r]] == 1)
        sum++;
    }
    if (sum >= k)
      ans++;
    l++, r++;
  }

  for (int i = 0; i < m; i++) {
    b[c[i]] = 0;
  }
  for (int i = 0; i < n; i++) {
    cnt[a[i]] = 0;
  }
  printf("%d\n", ans);
}

int main() {
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));
  memset(cnt, 0, sizeof(cnt));
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
