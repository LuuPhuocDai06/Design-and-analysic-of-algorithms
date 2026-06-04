#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }

    vector<int> ops;
    
    while (true) {
        vector<int> count(k + 2, 0);
        bool done = true;
        
        for (int i = 1; i <= n; ++i) {
            count[b[i]]++;
            if (b[i] < k + 1) {
                done = false;
            }
        }
        
        if (done) break;

        int best_course = -1;
        int max_level = -1;

        for (int i = 1; i <= n; ++i) {
            if (b[i] == k + 1) continue;
            
            int L = b[i];
            if (L == k || count[L + 1] < a[L + 1]) {
                if (L > max_level) {
                    max_level = L;
                    best_course = i;
                }
            }
        }

        if (best_course == -1) {
            cout << -1 << "\n";
            return;
        }

        ops.push_back(best_course);
        b[best_course]++;
    }

    cout << ops.size() << "\n";
    for (int x : ops) {
        cout << x << " ";
    }
    cout << "\n";
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