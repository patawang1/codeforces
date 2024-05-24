#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;

  cin >> n;

  int a[n], a_tot(0), ur_cut(0);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    a_tot += a[i];
  }

  sort(a, a + n, greater<int>());

  for (int i = 0; i < n; ++i) {
    ur_cut += a[i];

    if (ur_cut > a_tot / 2) {
      cout << i + 1;
      return 0;
    }
  }
}