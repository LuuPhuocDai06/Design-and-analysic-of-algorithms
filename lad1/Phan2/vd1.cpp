// Giai thuat 2.
#include <iostream>
using namespace std;

int main(){
    int n, x;
    double p = 1, s = 1;
    
    cout<<"Nhap n: "; 
    cin >> n;
    
    cout<< "Nhap x: ";
    cin >> x;
    
    for(int i = 1; i <= n; i++){
    	p = p * x / i;
    	s = s + p;
	}
	cout<< "Tong = "<< s << endl;
    return 0;
}