#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll sum = accumulate(a, a + n, 0ll);
  int msk = 1 << n;
  ll ans = LLONG_MAX;
  for (int i = 0; i < msk; i++) {
    ll half = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) half += a[j];
    }
    ans = min(ans, abs(sum - 2 * half));
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
