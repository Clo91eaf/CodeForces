// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 2e5 + 5;

// tuple<int, int, int> p[MAXN];
// int ans[MAXN];

// int f(string s, int l, int r) {
//   int n = s.length();
//   int f_sum = 0;
//   for (int k = 2; k <= n; k++) {
//     for (int i = 0; i <= n - k; i++) {
//       int j = i + k - 1;
//       if (l - 1 <= i && j <= r - 1) {
//         string sub = s.substr(i, k);
//         bool is_palindrome = true;
//         for (int x = 0; x < k / 2; x++) {
//           if (sub[x] != sub[k - x - 1]) {
//             is_palindrome = false;
//             break;
//           }
//         }
//         if (!is_palindrome) {
//           f_sum += k;
//         }
//       }
//     }
//   }
//   return f_sum;
// }

// void solve() {
//   int n, q;
//   cin >> n >> q;
//   string s;
//   cin >> s;
//   for (int i = 0; i < q; i++) {
//     int a, b;
//     cin >> a >> b;
//     p[i] = make_tuple(a, b, i);
//   }
//   sort(p, p + q);
//   for (int i = 0; i < q; i++) {
//     int l = get<0>(p[i]);
//     int r = get<1>(p[i]);
//     if (i == 0) ans[get<2>(p[i])] = f(s, l, r);
//     else {
//       int prev_l = get<0>(p[i - 1]);
//       int prev_r = get<1>(p[i - 1]);
//       for (int j = pre; j <= prev_r; j++) {
//         ans[get<2>(p[i])] = ans[get<2>(p[i - 1])];
//         break;
//       }
//     }

//   }
// }

// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
// }