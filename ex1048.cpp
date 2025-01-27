#include <iostream>
#include <iomanip>
using namespace std; // Aumento de Salário

int main(){
	double salario, reaj, resultado;
	int reajuste;
	cout << "Digite o valor do salario: ";
	cin >> salario;
	if(salario > 0 && salario <= 400){
		reaj = 15;
		resultado = (salario * (reaj/100));
		salario += resultado;
		reajuste = (int)reaj;//está passando reaj, que é tipo double, para o tipo inteiro reajuste(casting)
	}else if(salario > 400 && salario <= 800){
		reaj = 12;
		resultado = (salario * (reaj/100));
		salario += resultado;
		reajuste = (int)reaj;//está passando reaj, que é tipo double, para o tipo inteiro reajuste(casting)
	}else if(salario > 800 && salario <= 1200){
		reaj = 10;
		resultado = (salario * (reaj/100));
		salario += resultado;
		reajuste = (int)reaj;//está passando reaj, que é tipo double, para o tipo inteiro reajuste(casting)
	}else if(salario > 1200 && salario <= 2000){
		reaj = 7;
		resultado = (salario * (reaj/100));
		salario += resultado;
		reajuste = (int)reaj;//está passando reaj, que é tipo double, para o tipo inteiro reajuste(casting)
	}else if(salario > 2000){
		reaj = 4;
		resultado = (salario * (reaj/100));
		salario += resultado;
		reajuste = (int)reaj;//está passando reaj, que é tipo double, para o tipo inteiro reajuste(casting)
	}
	cout << "Novo salario: " << fixed << setprecision(2) << salario << "\n";
	cout << "Reajuste ganho: " << fixed << setprecision(2) << resultado << "\n";
	cout << "Em percentual: " << reajuste << " %" << "\n";
	
	return 0;
}
