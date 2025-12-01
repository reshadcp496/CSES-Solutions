#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, q;
  cin >> n >> q;
  string s[n];
  int m = n;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
  vector<vector<ll>> pfs(n + 1, vector<ll>(m + 1));
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= m; j++) {
      pfs[i][j] = (s[i - 1][j - 1] == '*') + pfs[i - 1][j] +
                  pfs[i][j - 1] - pfs[i - 1][j - 1];
    }
  }
  auto ask = [&](ll x1, ll y1, ll x2, ll y2) {
    if (x1 > x2) swap(x1, x2);
    if (y1 > y2) swap(y1, y2);
    return pfs[x2][y2] - pfs[x1 - 1][y2] -
           pfs[x2][y1 - 1] + pfs[x1 - 1][y1 - 1];
  };
  while (q--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << ask(x1, y1, x2, y2) << '\n';
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
