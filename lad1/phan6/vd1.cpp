#include <iostream>
#include <cmath> 

using namespace std;

const double PI = 3.14159;

float tinh(float x) {
    float t, s = 0;
    for (int i = 1; i <= 100; i++) {
        t = i * x;
        s = s + sin(t) + cos(t);
    }
    return s;
}

int main() {
    float x, s;
    cout << "Nhap goc x (do): ";
    cin >> x;

    x = x * PI / 180; 
    
    s = tinh(x); 
    
    cout << "Ket qua S = " << s << endl;
    return 0;
}