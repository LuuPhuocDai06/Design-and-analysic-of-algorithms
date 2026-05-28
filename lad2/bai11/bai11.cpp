#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (p[i] > p[i + 1]) {
            ans++;
            i++; 
        }
    }
    cout << ans << "\n";
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