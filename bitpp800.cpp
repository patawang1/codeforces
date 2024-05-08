// made by The Based 0ne
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int num, x(0);
  string input;
  cin >> num;

  for (int i = 0; i < num; i++) {
    cin >> input;
    if (input == "++X" || input == "X++") {
      x++;
    } else if (input == "X--" || input == "--X") {
      x--;
    }
  }

  cout << x;

  return 0;
}