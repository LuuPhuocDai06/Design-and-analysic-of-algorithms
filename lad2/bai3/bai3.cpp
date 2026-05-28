#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    int c = 0;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            c++;
            if (c == k) {
                ans++;
                c = 0;
                i++;
            }
        } else {
            c = 0;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}