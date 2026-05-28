#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> c;
    int m = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        c[x]++;
        m = max(m, c[x]);
    }
    cout << n - m << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}