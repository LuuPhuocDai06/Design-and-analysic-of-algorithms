#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            a.push_back(i);
        }
    }
    
    if (a.empty()) {
        cout << (n + 2) / 3 << "\n";
        return;
    }
    
    int ans = a.size();
    ans += (a[0] + 1) / 3;
    ans += (n - 1 - a.back() + 1) / 3;
    
    for (int i = 1; i < a.size(); ++i) {
        ans += (a[i] - a[i - 1] - 1) / 3;
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