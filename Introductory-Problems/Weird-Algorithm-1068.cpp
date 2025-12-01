#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  while (1) {
    cout << n << ' ';
    if (n == 1) break;
    if (n & 1) {
      n *= 3;
      n++;
    } else {
      n /= 2;
    }
  }
  cout << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
