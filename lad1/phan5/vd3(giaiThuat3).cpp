#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a[] = {0, 4, -5, 6, -4, 2, 3, -7}; 
    int n = 7;

    int maxsofar = 0;      
    int maxendinghere = 0; 
    
    for (int i = 1; i <= n; i++) {
        maxendinghere = max(maxendinghere + a[i], 0);
        maxsofar = max(maxsofar, maxendinghere);
    }
    
    cout << "Tong cua day con lien tiep lon nhat la: " << maxsofar << endl;
    
    return 0;
}