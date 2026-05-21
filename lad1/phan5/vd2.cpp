#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    long long hs[100][100] = {0}; 
    
    cout << "Nhap n: ";
    cin >> n;
    cout << "\n";
    
    for (int i = 1; i <= n; i++) {
        hs[i][1] = 1; 
        hs[i][i] = 1; 
    }
    
    for (int i = 3; i <= n; i++) {
        int mid = i / 2 + 1; 
        
        for (int j = 2; j <= mid; j++) {
            hs[i][j] = hs[i-1][j] + hs[i-1][j-1];
            hs[i][i-j+1] = hs[i][j]; 
        }
    }
    
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(4) << hs[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}