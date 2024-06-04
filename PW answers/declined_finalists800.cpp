#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int K;

  cin >> K;

  int r[K];

  for (int i = 0; i < K; ++i) {
    cin >> r[i];
  }

  sort(r, r + K);

  cout << (r[K - 1] < 25 ? 0 : r[K - 1] - 25);

  return 0;
}