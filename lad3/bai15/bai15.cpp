#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int mx = -1;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a < mx) {
            ans++;
        } else {
            mx = a;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}