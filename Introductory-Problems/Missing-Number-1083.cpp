#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  bool mp[n + 1]{};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x] = 1;
  }
  for (int i = 1; i <= n; i++) {
    if (!mp[i]) {
      cout << i << '\n';
      return;
    }
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
