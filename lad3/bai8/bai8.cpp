#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i] / x;
    }
    
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        long long c = a[i] + y * (s - a[i] / x);
        ans = max(ans, c);
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