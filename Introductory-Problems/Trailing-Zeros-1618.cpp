#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int legend(int n, int p) {
  int res = 0;
  while (n) {
    n /= p;
    res += n;
  }
  return res;
}

void solve() {
  int n;
  cin >> n;
  cout << legend(n, 5) << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
