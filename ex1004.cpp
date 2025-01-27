#include <iostream>

using namespace std; // Produto Simples
int produto(int x, int y){
int prod = x * y;
cout << "PRODUTO = " << prod << "\n";
return prod;
}
int main(){
	int A, B;
	cin >> A >> B;
	
	
	produto(A,B); 
	
	return 0;
}
