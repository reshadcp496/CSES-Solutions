#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1005;
const int INF = 1e9;
int ans[N][N];
int n;
queue<pair<int, int>> q;

void f(int x, int y, int d) {
  bool ok = (x < n and x >= 0 and y < n and y >= 0 and ans[x][y] == INF);
  if (ok) {
    ans[x][y] = d;
    q.push({x, y});
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ans[i][j] = INF;
    }
  }
  while (q.size()) q.pop();
  f(0, 0, 0);
  while (q.size()) {
    auto [x, y] = q.front();
    q.pop();
    int d = ans[x][y];
    f(x + 2, y + 1, d + 1);
    f(x + 2, y - 1, d + 1);
    f(x - 2, y + 1, d + 1);
    f(x - 2, y - 1, d + 1);
    f(x + 1, y + 2, d + 1);
    f(x + 1, y - 2, d + 1);
    f(x - 1, y + 2, d + 1);
    f(x - 1, y - 2, d + 1);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j] << ' ';
    }
    cout << '\n';
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
