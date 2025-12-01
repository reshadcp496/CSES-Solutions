#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  int ans = 0, last = 1;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (mp[x] > last) {
      ans = max(ans, i - mp[x] + 1);
    } else {
      ans = max(ans, i - last + 1);
    }
    if (mp[x] > last) last = mp[x];
    mp[x] = i + 1;
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
