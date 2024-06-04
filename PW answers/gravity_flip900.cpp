#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a, a + n);

  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ';
  }

  return 0;
}