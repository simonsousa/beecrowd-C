#include <iostream>
#include <iomanip>
using namespace std;//Sal�rio com B�nus
int main(){
	string vendedor;
	double salario,vendas;
	
	cin >> vendedor >> salario >> vendas;
	
	cout << "TOTAL = R$ " << fixed << setprecision(2) << (salario + vendas * 0.15) << endl; 	
	
	return 0;	
}
