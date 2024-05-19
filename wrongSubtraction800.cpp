#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int num, times;

  cin >> num >> times;

  for (int i = 0; i < times; i++) {
    if (num % 10 != 0) {
      num--;
    } else {
      num /= 10;
    }
  }

  cout << num;

  return 0;
}