#include <iostream>
using namespace std;

int main() {
    int n;
    double s = 1.0; 
    double a = 1.0; 
    
    cout << "Nhap n: ";
    cin >> n;
    
    for (int i = 0; i <= n; i++) {
        a = a * 2.0 * (i + 1) / (2 * i + 3);
        s = s + a;
    }
    
    cout << "Ket qua S = " << s << endl;
    return 0;
}