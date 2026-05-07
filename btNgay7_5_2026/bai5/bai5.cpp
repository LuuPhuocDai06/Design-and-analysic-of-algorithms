#include <iostream>
using namespace std;
int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    int t_con_lai = 240 - k;
    
    int dem = 0; 
    int tong_t = 0; 

    for (int i = 1; i <= n; i++) {
        int t_bai_nay = 5 * i;
        
        if (tong_t + t_bai_nay <= t_con_lai) {
            tong_t += t_bai_nay;
            dem++;
        } else {
            break;
        }
    }
    cout << dem << endl;
    return 0;
}