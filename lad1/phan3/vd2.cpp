#include <iostream>
#include <cmath>

using namespace std;
// Ham kiem tra so le.
bool le(int n) {
    return n % 2 != 0;
}

// Ham ktra so nguyen to.
    bool nguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Ham ktra so chinh phuong.
bool chinhPhuong(int n) {
    if (n < 0) return false;
    int sq = sqrt(n);
    return (sq * sq == n);
}

// Ham ktra so hoan hao.
bool soHoanHao(int n) {
    if (n < 2) return false;
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Nhap so tu nhien n: ";
    cin >> n;
    
    
    if (le(n) || nguyenTo(n) || chinhPhuong(n) || soHoanHao(n)) { 
        cout << "Thuc hien S1" << endl;
    } else {
        cout << "Thuc hien S2" << endl; 
    }
    
    return 0;
}