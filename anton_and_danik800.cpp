#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string s;

  cin >> n >> s;

  int a_count(0), d_count(0);

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A') {
      ++a_count;
    } else {
      ++d_count;
    }
  }

  if (a_count > d_count) {
    cout << "Anton";
  } else if (a_count < d_count) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }

  return 0;
}