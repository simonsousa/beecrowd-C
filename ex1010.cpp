#include <iostream>
#include <iomanip>
using namespace std;//Cálculo Simples

int main(){
	int cod1,qtd1,cod2,qtd2;
	double vlpeca1, vlpeca2;
	cin >> cod1 >> qtd1 >> vlpeca1 >> cod2 >> qtd2 >> vlpeca2;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (qtd1*vlpeca1+qtd2*vlpeca2) << "\n";
	return 0;	 
}
