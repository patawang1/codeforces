#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;

  cin >> n >> m;

  int f[m];

  for (int i = 0; i < m; ++i) {
    cin >> f[i];
  }

  sort(f, f + m);

  int min_diff = f[m - 1] - f[0];

  for (int i = 0; i < m - n; ++i) {
    int diff = f[i + n - 1] - f[i];
    if (diff < min_diff) {
      min_diff = diff;
    }
  }

  cout << min_diff;

  return 0;
}