#include <iostream>
using namespace std;

// Ham kiem tra xem mang x co chua toan bo phan tu cua mang y hay khong.
bool Chua(int X[], int sizeX, int Y[], int sizeY) {
    for (int i = 0; i < sizeY; i++) {
        bool found = false;
        for (int j = 0; j < sizeX; j++) {
            if (Y[i] == X[j]) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

int main() {
    int A[] = {1, 2, 3, 4};
    int n = 4; 
    
    int B[] = {4, 3, 2, 1};
    int m = 4; 
    
    
    if ((n == m) && Chua(A, n, B, m) && Chua(B, m, A, n)) {
        cout << "Hai day bang nhau" << endl; 
    } else {
        cout << "Hai day khong bang nhau" << endl; 
    }
    
    return 0;
}