#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<string> results;

  for (int i = 0; i < n; ++i) {
    string word;
    cin >> word;

    if (word.length() > 10) {
      word = word[0] + to_string(word.length() - 2) + word.back();
    }

    cout << word << endl;
  }

  return 0;
}