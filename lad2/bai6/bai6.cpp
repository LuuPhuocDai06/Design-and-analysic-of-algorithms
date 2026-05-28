#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int m1 = 0, m2 = 0;
    int c1 = (n + 1) / 2;
    int c2 = n / 2;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (i % 2 == 0) {
            m1 = max(m1, x);
        } else {
            m2 = max(m2, x);
        }
    }
    
    int ans = max(m1 + c1, m2 + c2);
    if (m1 == 0) ans = m2 + c2;
    if (m2 == 0) ans = m1 + c1;
    
    cout << max(m1 + c1, m2 + c2) << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}