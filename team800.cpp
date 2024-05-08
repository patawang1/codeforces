#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int implemented = 0;

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int P, V, T;
    cin >> P >> V >> T;

    if (P + V + T > 1) {
      ++implemented;
    }
  }

  cout << implemented;

  return 0;
}