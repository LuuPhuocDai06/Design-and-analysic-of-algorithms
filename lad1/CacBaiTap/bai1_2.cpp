#include <iostream>
using namespace std;

int main() {
    int soHangN;
    cout << "Nhap so hang n: ";
    cin >> soHangN;

    double tongS    = 0.0;
    double giaiThua = 1.0; 

    for (int i = 1; i <= soHangN; i++) {
        giaiThua *= i;            
        double tuSo = 2.0 * i - 1; 
        tongS += tuSo / giaiThua;
    }

    cout << "S = " << tongS << endl;
    return 0;
}