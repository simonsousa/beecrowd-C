#include <iostream>
#include <iomanip>
using namespace std;//Sal�rio
int main(){
	int num, horas;
	double vlHora;
	
	cin >> num >> horas >> vlHora;
	
	cout << "NUMBER = " << num << "\n" << "SALARY = U$ " << fixed << setprecision(2) << (horas * vlHora) << "\n";	
	
	return 0;
}
