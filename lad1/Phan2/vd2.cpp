// Giai thuat 2.
#include <iostream>

using namespace std;

// Ham tinh tong uoc chung.
int tongUoc(int a) { 
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
    cout<<"Cac cap so:"<< endl;
    for (int i = 1; i <= 30000; i++) {
        k = tongUoc(i); 
        
        if (i > k) { 
            if (tongUoc(k) == i) { 
                cout << i << " va " << k << endl; 
            }
        }
    }
    return 0;
}