#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void h() {
    int n;
    if (!(cin >> n)) return;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());

    int m = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if ((b[i] + b[j]) % 2 == 0) {
                int d = 0;
                for (int k = 0; k < n; k++) {
                    if (b[k] >= b[i] && b[k] <= b[j]) {
                        d++;
                    }
                }
                if (d > m) m = d;
            }
        }
    }
    if (n == 0) cout << 0 << endl;
    else cout << n - m << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        h();
    }
    return 0;
}
