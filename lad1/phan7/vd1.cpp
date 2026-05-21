#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

float f(float x) {
    return sin(x) + cos(x); 
}

float g(float x, float y) {
    return 1 - sin(x) - sin(y); 
}

int main() {
    float x, y, p, kq;
    
    cout << "Nhap goc x và y (tinh bang do): ";
    cin >> x >> y; 
    
    x = x * PI / 180; 
    y = y * PI / 180; 
    
    p = f(x); 
    
    kq = (3 * p + 5 * g(p, y)) / g(g(x, y), p); 
    
    cout << "Ket qua cua bieu thuc la: " << kq << endl;
    
    return 0;
}