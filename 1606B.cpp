#include <bits/stdc++.h>

using namespace std;

using li = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin >> t;
  while (t--) {
    li n, k;
    cin >> n >> k;
    li ans = 0, cur = 1;
    while (cur < k) {
      cur *= 2;
      ++ans;
    }
    if (cur < n) ans += (n - cur + k - 1) / k;
    cout << ans << '\n';
  }
}	