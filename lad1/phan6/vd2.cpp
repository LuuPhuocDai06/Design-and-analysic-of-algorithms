#include <iostream>
using namespace std;

int d = 0; 

int Tonguoc(int a) {
    d++; 
    int s = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            s = s + i;
        }
    }
    return s;
}

int main() {
    int k;
    cout << "Cac cap so than thiet la:\n";
    
    for (int i = 1; i <= 10000; i++) {
        k = Tonguoc(i);
        
        if (i > k) {
            if (Tonguoc(k) == i) {
                cout << i << " " << k << endl;
            }
        }
    }
    cout << "\nSo lan goi chuong trinh con: " << d << endl;
    return 0;
}