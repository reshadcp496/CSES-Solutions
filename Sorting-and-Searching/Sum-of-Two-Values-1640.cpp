#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
  int n, x;
  cin >> n >> x;
  int a[n];
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]].push_back(i);
  }
  for (int i = 0; i < n; i++) {
    int need = x - a[i];
    for (auto j : mp[need]) {
      if (i == j) continue;
      cout << i + 1 << ' ' << j + 1 << '\n';
      return;
    }
  }
  cout << "IMPOSSIBLE\n";
}
 
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
