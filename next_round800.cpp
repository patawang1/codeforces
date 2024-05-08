#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int first, second, count(0);

  cin >> first >> second;
  count = first;
  int num;

  for (int i = 0; i < first; i++) {
    if (second <= i) {
      cin >> num;
    }
  }

  cout << count;

  return 0;
}