#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= 2;
    ans %= mod;
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
