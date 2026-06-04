#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int l = 1;
    int r = 3 * n;
    
    for (int i = 0; i < n; ++i) {
        cout << l << " " << r - 1 << " " << r << " ";
        l++;
        r -= 2;
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