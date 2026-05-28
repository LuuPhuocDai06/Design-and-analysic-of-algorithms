#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<vector<long long>> d(n + 1, vector<long long>(2, 1e15));
    
    d[1][0] = 0;
    
    if (n >= 2) {
        d[2][0] = abs(a[2] - a[1]);
        d[2][1] = 0;
    }

    for (int i = 3; i <= n; ++i) {
        d[i][0] = d[i - 1][0] + abs(a[i] - a[i - 1]);
        d[i][1] = min(d[i - 1][1] + abs(a[i] - a[i - 1]), 
                      d[i - 2][0] + abs(a[i] - a[i - 2]));
    }

    long long ans = min({d[n][0], d[n][1], d[n - 1][0]});
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