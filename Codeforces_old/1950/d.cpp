#include <bits/stdc++.h>
using namespace std;

int b[] = {0,     1,     10,    11,    100,   101,   110,   111,   1000,
           1001,  1010,  1011,  1100,  1101,  1110,  1111,  10000, 10001,
           10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010,
           11011, 11100, 11101, 11110, 11111, 100000};

bool ans[100005];

void solve() {
  int t;
  cin >> t;
  if (ans[t])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  for (int i = 0; i < 33; i++)
    ans[b[i]] = 1;
  for (int i = 0; i <= 100000; i++) {
    if (ans[i] == 0)
      continue;
    for (int j = 0; j < 33; j++) {
      if (i * b[j] <= 100000) {
        ans[i * b[j]] = 1;
      }
    }
  }

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}