#include <iostream>

using namespace std;

int main(){
	int matriz[5][3];
	
	for(int linha = 0; linha < 5; linha++){
			for(int coluna = 0; coluna < 3; coluna++){
				cout << "Digite um valor: ";
				cin >> matriz[linha][coluna];
			}
	}
	for(int i = 0; i < 5; i++){
			for(int j = 0; j < 3; j++){
				cout << "o valor da linha " << i <<" e coluna " << j << " = " << matriz[i][j] << "\n";
			}
	}
	
	
	return 0;
	
}
