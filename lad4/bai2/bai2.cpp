#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = 100;
    string t[4] = {"00", "25", "50", "75"};
    
    for (int k = 0; k < 4; ++k) {
        int p1 = -1, p2 = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == t[k][1]) {
                p2 = i;
                break;
            }
        }
        if (p2 != -1) {
            for (int i = p2 - 1; i >= 0; --i) {
                if (s[i] == t[k][0]) {
                    p1 = i;
                    break;
                }
            }
        }
        if (p1 != -1 && p2 != -1) {
            ans = min(ans, n - p1 - 2);
        }
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