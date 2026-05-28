#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 1) c1++;
        else c2++;
    }
    
    int sum = c1 + c2 * 2;
    
    if (sum % 2 != 0) {
        cout << "NO\n";
    } else if (c1 == 0 && c2 % 2 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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