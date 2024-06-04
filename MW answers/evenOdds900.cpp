#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int num, pos, count(1);

  cin >> num >> pos;

  for (int i = 1; i <= num; i += 2) {
    if (count == pos) {
      cout << i;
    }
    count++;
  }
  for (int i = 2; i <= num; i += 2) {
    if (count == pos) {
      cout << i;
    }
    count++;
  }

  return 0;
}