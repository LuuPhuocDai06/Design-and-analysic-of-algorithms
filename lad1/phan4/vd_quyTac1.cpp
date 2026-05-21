#include <iostream>
using namespace std;

int main() {
    int y;
    for (int x = 1; x <= 24; x++) {
        y = 36 - x; 
        
        if (2 * x + 4 * y == 100) {
            cout << "So ga: " << x << " - So cho: " << y << endl;
        }
    }
    return 0;
}