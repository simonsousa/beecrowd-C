#include <iostream>
#include <cmath>
#define ano 365
#define mes 30
using namespace std;//Idade em Dias;
int main(){
	int d, anos, meses, dias;
	cin >> d;
	anos = trunc(d / ano);
	meses = (d % ano)/mes;
	dias = (d % ano) % mes;
	
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
}
