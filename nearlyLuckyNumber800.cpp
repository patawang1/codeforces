#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int num, digits(0);

  cin >> num;

  while (num > 0) {
    num /= 10;
    digits++;
  }

  if (digits == 4 || digits == 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}