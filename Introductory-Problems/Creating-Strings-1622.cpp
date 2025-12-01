#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  set<string> ans;
  do {
    ans.insert(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << ans.size() << '\n';
  for (auto str : ans) cout << str << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
