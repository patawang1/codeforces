#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s, t;

  cin >> s >> t;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] != t[t.length() - 1 - i]) {
      cout << "NO";

      return 0;
    }
  }

  cout << "YES";

  return 0;
}