#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll a, b;
  cin >> a >> b;
  ll ux = 2 * b - a;
  ll uy = 2 * a - b;
  if (ux >= 0 and ux % 3 == 0 and uy >= 0 and uy % 3 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  ll tc;
  cin >> tc;
  while (tc--) solve();
}
