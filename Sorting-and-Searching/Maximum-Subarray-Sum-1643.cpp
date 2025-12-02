#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 2e18;

void solve() {
  int n;
  cin >> n;
  set<ll> st = {0};
  ll sum = 0, ans = -INF;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
    ans = max(ans, sum - *st.begin());
    st.insert(sum);
  }
  cout << ans << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
