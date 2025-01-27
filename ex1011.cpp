#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;//(4/3.0)*pi*R^3
#define pi 3.14159
int main(){
	double raio;
	cin >> raio;
	cout << "VOLUME = " << fixed << setprecision(3) << ((4/3.0) * pi * pow(raio,3)) << endl;
	return 0; 
}
