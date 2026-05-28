#include <iostream>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int r1 = (b % 2 == c % 2) ? 1 : 0;
    int r2 = (a % 2 == c % 2) ? 1 : 0;
    int r3 = (a % 2 == b % 2) ? 1 : 0;
    
    cout << r1 << " " << r2 << " " << r3 << "\n";
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