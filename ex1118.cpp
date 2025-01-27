#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int nota1, nota2, media, option = 1;
	while(option == 1){
		cin >> nota1;
		while(nota1<0 || nota2>10){
			cout << "nota invalida" << "\n";
			cin >> nota1;
			break;
			}
		cin >> nota2;
		while(nota2<0 || nota2>10){
			cout << "nota invalida" << "\n";
			cin >> nota2;
			break;
			}
		media = (nota1+nota2)/2;
		cout << "media teste = " << media;
		break;		
	}
}

