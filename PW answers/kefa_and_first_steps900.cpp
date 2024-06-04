#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;

  cin >> n;

  int a[n];
  int subsegment_len(1);
  int longest_subsegment_len(2);

  cin >> a[0];

  for (int i = 1; i < n; ++i) {
    cin >> a[i];

    if (a[i] < a[i - 1]) {
      if (subsegment_len > longest_subsegment_len) {
        longest_subsegment_len = subsegment_len;
      }
      subsegment_len = 1;
    } else {
      ++subsegment_len;
    }
  }

  if (subsegment_len > longest_subsegment_len) {
    longest_subsegment_len = subsegment_len;
  }

  cout << longest_subsegment_len;

  return 0;
}