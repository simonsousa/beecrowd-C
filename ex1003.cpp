#include <iostream>

using namespace std;//Soma simples

int somar(int x, int y){
	return x + y;
}
int main(){
	int A, B;
	cin >> A >> B;
	cout << "SOMA = " << somar(A,B) << "\n";
	return 0;
}
