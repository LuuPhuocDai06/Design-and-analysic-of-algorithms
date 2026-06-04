#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1), pos(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    
    int ans = 0;
    int c = 0;
    
    for (int e = 1; e <= n; ++e) {
        ans = max(ans, e - 1 - c);
        if (pos[e] < e) {
            c++;
        }
    }
    ans = max(ans, n - c);
    
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