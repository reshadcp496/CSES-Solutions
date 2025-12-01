#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0, ct = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      ct++;
    } else {
      ans = max(ans, ct);
      ct = 1;
    }
  }
  ans = max(ans, ct);
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
