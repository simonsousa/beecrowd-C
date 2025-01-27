#include <iostream>
#include <iomanip>

using namespace std;//primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

int main(){
	int N;
	cin >> N;
	double valor1, valor2, valor3;
	double v1 = 0, v2 = 0, v3 = 0;
	for(int contador = 0; contador < N; contador++){
		cin >> valor1 >> valor2 >> valor3;
		v1 = valor1;
		v2 = valor2;
		v3 = valor3;
		double media = (v1*2+v2*3+v3*5)/10;
		cout << fixed << setprecision(1) << media << "\n";
	}
	
	return 0;
}
