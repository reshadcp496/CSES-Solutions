#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  ll sum = 1ll * n * (n + 1) / 2;
  if (sum & 1) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  ll half = sum / 2;
  set<int> st1, st2;
  for (int i = 1; i <= n; i++) st1.insert(i);
  while (half > 0) {
    if (*st1.rbegin() <= half) {
      half -= *st1.rbegin();
      st2.insert(*st1.rbegin());
      st1.erase(--st1.end());
    } else {
      auto it = st1.upper_bound(half);
      it--;
      half -= *it;
      st2.insert(*it);
      st1.erase(it);
    }
  }
  cout << st1.size() << '\n';
  for (auto i : st1) {
    cout << i << ' ';
  }
  cout << '\n'
       << st2.size() << '\n';
  for (auto i : st2) {
    cout << i << ' ';
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
