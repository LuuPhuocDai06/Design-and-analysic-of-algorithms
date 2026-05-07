#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f() {
    int x;
    if (!(cin >> x)) return;
    vector<int> b(x + 1);
    for (int j = 1; j <= x; j++) cin >> b[j];

    vector<bool> v(x + 1, false);

    for (int j = 1; j <= x; j++) {
        if (!v[j]) {
            vector<int> p;
            vector<int> g;
            
            long long c = j;
            while (c <= x) {
                if (!v[c]) {
                    v[c] = true;
                    p.push_back((int)c);
                    g.push_back(b[c]);
                }
                c *= 2;
            }
            sort(p.begin(), p.end());
            sort(g.begin(), g.end());

            for (int k = 0; k < (int)p.size(); k++) {
                if (p[k] != g[k]) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        f();
    }
    return 0;
}
