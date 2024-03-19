#include <bits/stdc++.h>
using namespace std;

int blockSize;
unordered_map<int, int> cnt;

struct QueryResult {
  int index;
  int result;
};

struct Interval {
  int left;
  int right;
  int index;
};

bool compareQueries(const Interval& a, const Interval& b) {
  if (a.left / blockSize != b.left / blockSize) {
    return a.left / blockSize < b.left / blockSize;
  }
  return a.right < b.right;
}

// 计算区间内不同元素的数量
int countDistinctElements(const vector<int>& arr, int left, int right) {
  int ans = 0;

  for (int i = left; i <= right; ++i) {
    if (cnt[arr[i]] == 0) {
      ++ans;
    }
    ++cnt[arr[i]];
  }

  return ans;
}

int solve() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<Interval> queries(q);
  for (int i = 0; i < q; ++i) {
    cin >> queries[i].left >> queries[i].right;
    queries[i].index = i;
  }

  blockSize = static_cast<int>(sqrt(n));                 // 设置块的大小
  sort(queries.begin(), queries.end(), compareQueries);  // 对查询进行排序

  vector<QueryResult> results(q);
  int left = 0, right = -1, ans = 0;  // 初始化左右端点和不同元素数量

  for (int i = 0; i < q; ++i) {
    int l = queries[i].left - 1;
    int r = queries[i].right - 1;

    // 移动左端点
    while (left > l) {
      --left;
      ans += (s[left] != s[r]) ? r - left : 0;
    }

    // 移动右端点
    while (right < r) {
      ++right;
      ans += (s[right] != s[l]) ? right - l : 0;
    }

    // 移动左端点
    while (left < l) {
      ans -= (s[left] != s[r]) ? r - left : 0;
      ++left;
    }

    // 移动右端点
    while (right > r) {
      ans -= (s[right] != s[l]) ? right - l : 0;
      --right;
    }

    // 记录结果
    results[queries[i].index] = {queries[i].index, ans};
  }

  // 输出结果
  for (int i = 0; i < q; ++i) {
    cout << results[i].result << endl;
  }

  return 0;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}