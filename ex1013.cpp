#include <iostream>
#include <cmath>
using namespace std;//o Maior entre 3 numeros

int main(){
	int a,b,c,maiorAB;
	cin >> a >> b >> c;
	maiorAB = (a+b+abs(a - b))/2;
	cout << (maiorAB + c + abs(maiorAB - c))/2 << " eh o maior" << "\n";
	return 0;
}
