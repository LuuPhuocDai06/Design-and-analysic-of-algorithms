#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> ans(n, 0);
    int c = 0;
    
    for (int i = n - 1; i >= 0; --i) {
        c = max(c, a[i]);
        if (c > 0) {
            ans[i] = 1;
            c--;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}