#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void process() {
    int m;
    if (!(cin >> m)) return;
    
    long long tong = 0;
    for (int i = 0; i < m; i++) {
        long long temp;
        cin >> temp;
        tong += temp;
    }

    long long can = round(sqrt(tong));

    if (can * can == tong) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    if (!(cin >> test)) return 0;
    while (test--) {
        process();
    }
    return 0;
}