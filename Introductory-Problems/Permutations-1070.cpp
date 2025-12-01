#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  if (n == 2 or n == 3) {
    cout << "NO SOLUTION\n";
    return;
  }
  for (int i = 2; i <= n; i += 2) {
    cout << i << ' ';
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << ' ';
  }
  cout << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
