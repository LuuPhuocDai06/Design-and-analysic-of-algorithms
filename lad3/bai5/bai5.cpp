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
        cout << "0 0\n";
        return;
    }
    
    int mn = 0, mx = 0;
    int l = a[0], r = a[0];
    
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] - r <= 2) {
            r = a[i];
        } else {
            int k = r - l + 1;
            mx += k;
            mn += k / 2 + 1;
            l = a[i];
            r = a[i];
        }
    }
    
    int k = r - l + 1;
    mx += k;
    mn += k / 2 + 1;
    
    cout << mn << " " << mx << "\n";
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