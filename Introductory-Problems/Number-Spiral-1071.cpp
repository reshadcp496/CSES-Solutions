#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int x, y;
  cin >> x >> y;
  int mx = max(x, y);
  int diff = mx - min(x, y);
  ll corner = 1ll * mx * mx - mx + 1;
  if (mx & 1) {
    if (x == mx) {
      cout << corner - diff << '\n';
    } else {
      cout << corner + diff << '\n';
    }
  } else {
    if (x == mx) {
      cout << corner + diff << '\n';
    } else {
      cout << corner - diff << '\n';
    }
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int tc;
  cin >> tc;
  while (tc--) solve();
}
