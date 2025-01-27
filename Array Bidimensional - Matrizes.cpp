#include <iostream>

using namespace std;

int main(){
	//Matriz ou Array Bidimensional é a mesma coisa que Array de uma Array, ou um Vetor de um Vetor; basicamente são tabelas;
	
	int matriz[3][4]; //[3]:linhas; [4]:colunas;
	
	//int teste[5][3][10][4]; //precisamos usar um for para cada dimensão; nesse caso precisamos de 4 for;
	int L, C;
	
	/*
	for(L = 0; L < 3; L++){ // CRIEI UM FOR QUE VAI PERCORRER A PRIMEIRA DIMENSÃO: MATRIZ[3] onde estão as linhas
		for(C = 0; C < 4; C++){
			matriz[L][C]=L;
		}
	}
	*/
	for(L = 0; L < 3; L++){
		for(C = 0; C < 4; C++){
			cin >> matriz[L][C];
		}
	}
	
	/*
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
	
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
	*/
	
	for(L = 0; L < 3; L++){ // CRIEI UM FOR QUE VAI PERCORRER A PRIMEIRA DIMENSÃO: MATRIZ[3] onde estão as linhas
		for(C = 0; C < 4; C++){
			cout << matriz[L][C] << " ";
		}
		cout << "\n";
	}

	return 0;
}
