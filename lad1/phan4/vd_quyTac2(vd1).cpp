#include <iostream>
using namespace std;

int main() {
    int n;
    double E = 0, gt = 1; 
    
    cout << "Nhap n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        gt = gt * i; 
        
        E = E + (2.0 * i - 1) / gt; 
    }
    
    cout << "Ket qua E = " << E << endl;
    return 0;
}