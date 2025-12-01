#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<int, int>> ans;

void f(int n, int s, int m, int e) {
  if (n == 1) {
    ans.push_back({s, e});
    return;
  }
  f(n - 1, s, e, m);
  f(1, s, m, e);
  f(n - 1, m, s, e);
}

void solve() {
  int n;
  cin >> n;
  f(n, 1, 2, 3);
  cout << ans.size() << '\n';
  for (auto [x, y] : ans) cout << x << ' ' << y << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
