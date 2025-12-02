#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  int mp[n]{};
  mp[0]++;
  ll sum = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
    int r = (sum % n + n) % n;
    ans += mp[r];
    mp[r]++;
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
