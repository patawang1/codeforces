#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int wants, first, dollars, total(0);

  cin >> first >> dollars >> wants;

  for (int i = 1; i <= wants; i++) {
    total += first * i;
  }

  if (dollars >= total) {
    cout << "0";
  } else {
    cout << total - dollars;
  }

  return 0;
}