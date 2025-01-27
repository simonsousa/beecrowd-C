#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double nota, notasValidadas=0, totaldeNotas=0, media=0;
	while(totaldeNotas<2){
		cin >> nota;
			if(nota>=0 && nota<=10){
				notasValidadas += nota;
				totaldeNotas++;
			}else{
				cout << "nota invalida" << "\n";	
		}
	}
	media = notasValidadas/2;
	cout << "media = " << fixed << setprecision(2) << media << "\n";
	
	return 0;
	
}

