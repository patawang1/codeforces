#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string p;

  cin >> p;

  for (int i = 0; i < p.length(); ++i) {
    if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}