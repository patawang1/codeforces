#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int x, steps(0);

  cin >> x;

  steps = x / 5;

  if (x % 5 > 0) {
    steps++;
  }

  cout << steps;

  return 0;
}