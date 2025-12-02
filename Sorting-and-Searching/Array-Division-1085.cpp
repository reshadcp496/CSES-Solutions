#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll lo = 0, hi = 2e14, mid;
  while (lo <= hi) {
    mid = lo + (hi - lo) / 2;
    ll sum = 0, ct = 1;
    for (int i = 0; i < n; i++) {
      sum += a[i];
      if (sum > mid) {
        ct++;
        sum = a[i];
      }
      if (a[i] > mid) {
        ct = k + 1;
        break;
      }
    }
    if (ct <= k) {
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }
  cout << lo << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
