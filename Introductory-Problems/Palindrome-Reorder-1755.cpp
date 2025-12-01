#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  map<char, int> mp;
  for (auto c : s) {
    mp[c]++;
  }
  int od = 0;
  for (auto [c, ct] : mp) {
    if (ct & 1) od++;
    if (od > 1) {
      cout << "NO SOLUTION\n";
      return;
    }
  }
  string front, back, middle;
  for (auto [c, ct] : mp) {
    if (ct & 1) {
      middle += c;
    }
    while (ct >= 2) {
      front += c;
      back += c;
      ct -= 2;
    }
  }
  reverse(back.begin(), back.end());
  cout << front << middle << back << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
