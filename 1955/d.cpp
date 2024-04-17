#include <bits/stdc++.h>
using namespace std;

int a[200005];
int cnt[1000005];

void solve() {
  memset(a, 0, sizeof(a));
  memset(cnt, 0, sizeof(cnt));
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int t;
  for (int i = 0; i < m; i++) {
    cin >> t;
    cnt[t]++;
  }
  int good = 0;
  int ans = 0;
  for (int i = 0; i < m - 1; i++) {
    good += cnt[a[i]]-- > 0;
  }
  for (int i = 0; i <= n - m; i++) {
    good += cnt[a[i + m - 1]]-- > 0;
    ans += good >= k;
    good -= ++cnt[a[i]] > 0;
  }
  printf("%d\n", ans);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
