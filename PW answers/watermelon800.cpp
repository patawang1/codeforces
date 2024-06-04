#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int w;

  cin >> w;

  if (w % 2 == 0 && w > 2) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}