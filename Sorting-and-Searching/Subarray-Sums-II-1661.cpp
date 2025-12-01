#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, x;
  cin >> n >> x;
  map<ll, int> mp;
  mp[0]++;
  ll sum = 0, ans = 0;
  for (int i = 1; i <= n; i++) {
    int val;
    cin >> val;
    sum += val;
    ans += mp[sum - x];
    mp[sum]++;
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
