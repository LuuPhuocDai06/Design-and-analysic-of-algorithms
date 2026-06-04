#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    
    if (h > l) {
        swap(h, l);
    }
    
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x <= h) {
            c1++;
        } else if (x <= l) {
            c2++;
        }
    }
    
    int ans = min(c1, (c1 + c2) / 2);
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