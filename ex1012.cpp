#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159
using namespace std;
/*
TRIANGULO: A = (base * altura) / 2
CIRCULO: A = p * r²
TRAPEZIO:A = [(base maior + base menor) * altura] / 2
QUADRADO: A = lado²
RETANGULO: A = base * altura
*/
int main(){	
	double A,B,C;
	cin >> A >> B >> C;
	cout << "TRIANGULO: " << fixed << setprecision(3) << (A * C)/2 << "\n";
	cout << "CIRCULO: " << fixed << setprecision(3) << (pi * pow(C,2)) << "\n";
	cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A + B)*C)/2 << "\n";
	cout << "QUADRADO: " << fixed << setprecision(3) << pow(B,2) << "\n";
	cout << "RETANGULO: " << fixed << setprecision(3) << (A * B) << "\n";
	return 0;
}
