#include <bits/stdc++.h>
using namespace std;
long long x, a[200005];
int n, cnt(0);
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
