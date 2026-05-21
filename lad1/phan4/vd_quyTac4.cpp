#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    
    cout << "Nhap so phan tu n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int i = 1; 
    while (i < n) { 
        int j = i + 1; 
        
        while (j <= n) { 
            if (a[i] > a[j]) {
                int temp = a[i]; a[i] = a[j]; a[j] = temp; 
            }
            
            if ((j + 1 <= n) && (a[i] > a[j + 1])) {
                int temp = a[i]; a[i] = a[j + 1]; a[j + 1] = temp;
            }
            j = j + 2; 
        }
        i = i + 1; 
    }

    cout << "Mang sau khi sap xep: ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;
    
    return 0;
}