#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void g() {
    vector<int> m(4);
    for (int i = 0; i < 4; i++) {
        if (!(cin >> m[i])) return;
    }

    sort(m.begin(), m.end());

    if (m[0] == m[3]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w;
    if (!(cin >> w)) return 0;
    while (w--) {
        g();
    }
    return 0;
}
