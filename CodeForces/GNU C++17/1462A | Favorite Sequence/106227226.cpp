#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &e : v) {
    cin >> e;
  }
  int left = 0, right = n - 1;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans[i] = v[left++];
    } else {
      ans[i] = v[right--];
    }
  }
  for (int i : ans) {
    cout << i << " ";
  }
  cout << "\n";
}
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}