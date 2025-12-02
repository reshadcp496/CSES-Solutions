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
  stack<pair<int, int>> s;
  s.push({-1, 0});
  for (int i = 0; i < n; i++) {
    while (s.top().first >= a[i]) {
      s.pop();
    }
    cout << s.top().second << ' ';
    s.push({a[i], i + 1});
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
