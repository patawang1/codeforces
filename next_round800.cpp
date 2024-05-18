#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int first, second, count(0);

  cin >> first >> second;
  int num;

  cin >> num;

  while (num > second) {
    count++;
    cin >> num;
  }

  cout << count;

  return 0;
}