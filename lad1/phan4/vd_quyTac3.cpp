#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int n, s1 = 0, s2 = 0;
    
    cout << "Nhap cap ma tran n: ";
    cin >> n;
    
    cout << "Nhap cac phan tu cua ma tran:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        s1 = s1 + a[i][i];         
        s2 = s2 + a[i][n - i + 1]; 
    }
    
    cout << "Tong cheo chinh s1 = " << s1 << endl;
    cout << "Tong cheo phu s2 = " << s2 << endl;
    
    return 0;
}