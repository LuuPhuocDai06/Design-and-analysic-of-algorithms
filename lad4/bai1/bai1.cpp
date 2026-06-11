#include <iostream>
using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;
    
    if (n % 2 != 0) {
        cout << x << "\n";
    } else {
        cout << 0 << "\n";
    }
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