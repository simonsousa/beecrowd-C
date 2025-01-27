#include <iostream>

using namespace std; // PRECISA SABER TRABALHAR COM MATRIZES NO C++ PARA RESOLVER ESSE PROBLEMA

int main(){
	int matriz[7][3];
	
	for(int linhas = 0; linhas < 7; linhas++){//for para incrementar as linhas
			for(int colunas = 0; colunas < 3; colunas++){//for aninhado para incrementar as colunas
				cin >> matriz[linhas][colunas];//loop do for aninhado para guardar os valores digitados
			}
	}
	cout << "\n";
	for(int linhas = 0; linhas < 7; linhas++){//for para incrementar as linhas
			for(int colunas = 0; colunas < 3; colunas++){//for aninhado para incrementar as colunas
				cout << matriz[linhas][colunas] << " ";//loop do for aninhado que imprime os valores digitados em 3 colunas
			}
			cout << "\n";
	}

	return 0;
	
}
