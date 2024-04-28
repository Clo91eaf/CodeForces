#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void solve() {
  ans.clear();
  int n, k;
  cin >> n >> k;
  int i = 0;
  for (; (1 << (i + 1) <= k); i++) ;
  ans.push_back(k - (1 << i));
  ans.push_back(k + 1);
  ans.push_back(k + 1 + (1 << i));
  for (int j = 0; j < 20; j++)
    if (j != i)
      ans.push_back(1 << j);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << ans.size() << "\n";
    for (int i : ans)
      cout << i << " ";
    cout << "\n";
  }
}
