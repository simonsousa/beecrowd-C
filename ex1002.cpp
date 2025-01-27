#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159

using namespace std;//Área do Círculo

int main(){
 	double raio, area;
 	cout << "Digite o valor do Raio: ";
 	cin >> raio;
 	area = pi * pow(raio,2);	
	cout << "A=" << fixed << setprecision(4) << area << "\n";
 	
	 return 0;
}
